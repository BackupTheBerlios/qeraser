/***************************************************************************
                          fileeraserimpl.cpp  -  description
                             -------------------
    begin                : Fre Jan 17 2003
    copyright            : (C) 2003 by Tobias Gläßer
    email                : tobi.web@gmx.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#include "fileeraserimpl.h"
/*
string homedir;
string configfile;
config_t conf;
char temp_config_value[MAX_LINE_SIZE];
config_struct fileeraser_config;
void get_config(config_struct& config);*/

fileeraserImpl::fileeraserImpl( QWidget* parent , const char* name , WFlags fl  ) : fileeraser( parent, name, fl )//, fileeraser_thread(this)
{
firstfile = 0;
filecnt = 0;
erase_button->setPalette( QPalette( QColor( 127, 10, 10) ) );
erase_button->setFont(QFont("Times", 12 , QFont::Bold) );
config_dialog = new Config_Dialog(this);
manual_dialog = new Manual_DialogImpl(this);
info_dialog   = new Info_Dialog(this);
QObject::connect( config_button, SIGNAL( clicked() ), config_dialog , SLOT( show()));
QObject::connect( info_button, SIGNAL( clicked() ), info_dialog , SLOT( show()));
QObject::connect( manual_button, SIGNAL( clicked() ), manual_dialog , SLOT( show()));
QFile creditfile("credits.txt");
QString creditstream;
QTextStream textstream( &creditfile );        // use a text stream
if ( creditfile.open(IO_ReadOnly) ) {    // file opened successfully
 while ( !textstream.eof() ) {        // until end of file...
  creditstream = textstream.read();       // line of text excluding '\n'
 }
creditfile.close();
}
creditstream = creditstream.fromUtf8(creditstream,-1);
info_dialog->GPLbrowser->setSource(QDir::currentDirPath()+"/copying.txt");
info_dialog->creditsbrowser->setText(creditstream);
manual_dialog->manualbrowser->setSource(QDir::currentDirPath()+"/manuals/fileeraser.htm");
manual_dialog->setPalette( QPalette( QColor( 50, 50, 255) ) );
info_dialog->setPalette( QPalette( QColor( 50, 50, 255) ) );
config_dialog->setPalette( QPalette( QColor( 50, 50, 255) ) );
setPalette( QPalette( QColor( 50, 50, 255) ) );
}

void fileeraserImpl::handle_file_erasing()
{
if(!running())
{
erase_button->setText(tr("Stop"));
erase_button->repaint();
mymultiline->clear();
mymultiline->repaint();
QStringList mycombotext;
for(int cnt=0 ; cnt < mycombo->count(); ++cnt)
{
 mycombotext.append(mycombo->text(cnt));
}
if(mycombotext.contains(mycombo->currentText()) < 1 && mycombo->currentText() != "")
{
 mycombotext.append(mycombo->currentText());
}
filenames = (char**) malloc((mycombotext.count()+1)*sizeof(char*));
int cnt=0;
while(mycombotext[cnt] != NULL)
{
 *(filenames+cnt) = (char*) malloc(strlen(mycombotext[cnt])+1);
 strcpy(*(filenames+cnt),mycombotext[cnt]);
 ++cnt;
}
mycombo->clear();
file_erase_progress->setProgress(0);
total_erase_progress->setProgress(0);
firstfile = 0;
filecnt = cnt;
stop = false;
start();
}
else
{
stop = true;
erase_button->setText(tr("Start"));
}
}

void fileeraserImpl::browse_files()
{
QStringList fnames = myfd->getOpenFileNames("*","/",this,"",tr("Choose files for erasing!"));
for(int cnt=0 ; fnames[cnt] != NULL; ++cnt)
{
mycombo->insertItem(fnames[cnt]);
}
}

void fileeraserImpl::clear_list()
{
mycombo->clear();
}

void fileeraserImpl::remove_item()
{
mycombo->removeItem(mycombo->currentItem());
}

void fileeraserImpl::fit_droping()
{
int containnumber = mycombo->currentText().contains("file:",true);
if(containnumber > 0)
{
QStringList droped = QStringList::split("file:",mycombo->currentText(),true);
for(int cnt=0; cnt < containnumber; ++cnt)
{
  QString dropedfile = droped[cnt+1];
  dropedfile.replace(QRegExp("%5b"),"[");
  dropedfile.replace(QRegExp("%5d"),"]");
  dropedfile.replace(QRegExp("%7b"),"{");
  dropedfile.replace(QRegExp("%7c"),":");
  dropedfile.replace(QRegExp("%7d"),"}");
  dropedfile.replace(QRegExp("%20")," ");
  if(dropedfile.find(QRegExp("^['/''\\']*.:"),0) != -1)
  {
   dropedfile.replace(QRegExp("^['/''\\']*"),"");
  }
  dropedfile.replace(QRegExp("^/[/]*"),"/");
  while(dropedfile.endsWith(" "))
  {
  dropedfile.setLength(dropedfile.length()-1);
  }
  if(dropedfile != NULL)
  {
     mycombo->insertItem(dropedfile,cnt);
  }
}
mycombo->lineEdit()->clear();
}
}

void fileeraserImpl::run()
{
	if(filecnt != 0 || firstfile > filecnt)
	{

     mymultiline->insert(tr("Files to delete: "));
	 QString todel;
	 todel.sprintf("%d",filecnt - firstfile);
     mymultiline->insert(todel);
     mymultiline->insert("\n");
     mymultiline->insert("\n");
  int delquota = 0;
  total_erase_progress->setTotalSteps(filecnt);
  for(int cnt=firstfile; cnt < filecnt && !stop; ++cnt)
  {
  QString actfilename = filenames[cnt];
     mymultiline->insert(actfilename);
     mymultiline->insert("\n");

  file_erase_progress->setTotalSteps(fileeraser_config.multiple_overwrites);
  for(int scnt=0;scnt < fileeraser_config.multiple_overwrites;++scnt)
  {
   if(stop)
   {
   break;
   }

   char feraser_cmd[18+strlen(filenames[cnt])];
   feraser_cmd[0] = '\0';
   if(setenv("FILETOERASE",filenames[cnt],1) != 1)
   {
   strcat(feraser_cmd,"feraser -d -e -f $FILETOERASE ");
    if(!fileeraser_config.random_overwriting)
    {
    if(setenv("ERASEPATTERN",fileeraser_config.pattern.c_str(),1) != 1)
    {
    strcat(feraser_cmd,"-p $ERASEPATTERN");
    }
    }
    else
    {
    strcat(feraser_cmd,"-r");
    }
   }
   system(feraser_cmd);
   unsetenv("FILETOERASE");
   unsetenv("ERASEPATTERN");
   file_erase_progress->setProgress(scnt+1);
  }

  if(!stop && !fileeraser_config.only_erase)
  {
  if(remove(filenames[cnt]) != -1)
  {
     ++delquota;
     mymultiline->insert(tr("- Deleted"));
     mymultiline->insert("\n");
  }
  else
  {
     mymultiline->insert(tr("- Could not delete: "));
     mymultiline->insert(strerror(errno));
     mymultiline->insert("\n");
		 mycombo->insertItem(filenames[cnt]);
  }
  }
  total_erase_progress->setProgress(cnt+1);
  }
     mymultiline->insert("\n");
     mymultiline->insert(tr("Could delete "));
     QString showdelquota;
     showdelquota.sprintf("%d",delquota);
     mymultiline->insert(showdelquota);
     mymultiline->insert(tr(" of "));
     mymultiline->insert(todel);
     mymultiline->insert(tr(" files"));
	}
erase_button->setText(tr("Start"));
}
