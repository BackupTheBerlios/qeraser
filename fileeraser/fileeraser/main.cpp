/***************************************************************************
                          main.cpp  -  description
                             -------------------
    copyright            : (C) 2003 by Tobias Gl‰ﬂer
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

//qt
#include <qdir.h>
#include <qapplication.h>
#include <qcolor.h>
#include <qintdict.h>
#include <qtranslator.h>

//c
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <syslog.h>

//c++
#include <iostream>
#include <string>

using namespace std;

#include "settings.h"
#include "fileeraserimpl.h"

string homedir(getenv("HOME"));
string configfile;
config_t conf;
char temp_config_value[MAX_LINE_SIZE];
config_struct fileeraser_config;

int main( int argc, char* argv[] )
  {
  get_config(fileeraser_config);
    QApplication myapp( argc, argv );
    QTranslator translator( 0 );
    translator.load( "tranlations/qt_de.qm", "." );
    myapp.installTranslator( &translator );
    QTranslator ttranslator( 0 );

    ttranslator.load( "translations/fileeraser_de.qm", "." );
    myapp.installTranslator( &ttranslator );
     fileeraserImpl* myfileeraser = new fileeraserImpl();
	
    localeconv();
    myapp.setMainWidget( myfileeraser );
	 	      myfileeraser->show();

	 QObject::connect( myfileeraser->quit_button, SIGNAL( clicked() ), &myapp, SLOT( quit()));

	if(argc > 1)
	{
  		myfileeraser->run(); //1,argc,argv
	}

      return myapp.exec();
	}

void get_config(config_struct& config)
{
configfile = homedir;
configfile += "/.fileeraser.conf";
	if (!config_open(&conf, configfile.c_str() , C_READ|C_WRITE)) {
		fprintf(stderr, "error config_open()\n");
		exit(-1);
	}
config_read(&conf, "erasing", "multiple_overwrites",temp_config_value);
config.multiple_overwrites = atoi(temp_config_value);
config_read(&conf, "erasing", "only_erase",temp_config_value);
if(strcmp(temp_config_value,"true") == 0)
{
config.only_erase = true;
}
config_read(&conf, "erasing", "pattern",temp_config_value);
config.pattern = temp_config_value;
config_read(&conf, "erasing", "random_overwriting",temp_config_value);
if(strcmp(temp_config_value,"true") == 0)
{
config.random_overwriting = true;
}
}

void set_config(config_struct& config)
{
configfile = homedir;
configfile += "/.fileeraser.conf";
	if (!config_open(&conf, configfile.c_str() , C_READ|C_WRITE)) {
		fprintf(stderr, "error config_open()\n");
		exit(-1);
	}
config_read(&conf, "erasing", "multiple_overwrites",temp_config_value);
config.multiple_overwrites = atoi(temp_config_value);
config_read(&conf, "erasing", "only_erase",temp_config_value);
if(strcmp(temp_config_value,"true") == 0)
{
config.only_erase = true;
}
config_read(&conf, "erasing", "pattern",temp_config_value);
config.pattern = temp_config_value;
config_read(&conf, "erasing", "random_overwriting",temp_config_value);
if(strcmp(temp_config_value,"true") == 0)
{
config.random_overwriting = true;
}
}
