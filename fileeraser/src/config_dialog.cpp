/****************************************************************************
** Form implementation generated from reading ui file 'config_dialog.ui'
**
** Created: Sam Mai 3 12:50:15 2003
**      by: The User Interface Compiler ($Id: config_dialog.cpp,v 1.1 2003/06/25 21:57:00 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "config_dialog.h"

#include <qvariant.h>
#include <qheader.h>
#include <qlistview.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "config_frame.h"
static const char* const image0_data[] = { 
"32 32 5 1",
". c None",
"b c #000000",
"# c #003400",
"a c #4a4c4a",
"c c #9c959c",
"................................",
"...#............................",
"..#a#...........................",
".#a#a#..........................",
"..#a#a#.........................",
"...#a#a#........................",
"....#a#a#.......................",
".....#a#a#......................",
"......#a#a#.....................",
".......#a#a#....................",
"........#a#a#...................",
".........#a#bb..................",
"..........#bbc..................",
"...........bccc.................",
".............ccc................",
"..............ccc...............",
"...............ccc..............",
"................ccc.............",
".................ccc............",
"..................ccc...........",
"...................ccc..........",
"....................ccc.........",
".....................ccc........",
"......................ccc.......",
".......................ccc......",
"........................ccc.....",
".........................c......",
"..........................c.....",
"................................",
"................................",
"................................",
"................................"};

static const char* const image1_data[] = { 
"22 22 2 1",
". c None",
"# c #9cbe08",
"........######........",
".....###########......",
"....##############....",
"...################...",
"..######......######..",
"..#####........#####..",
".#####.......#..#####.",
".####.......###..####.",
"####.......#####..####",
"####......#####...####",
"####....#######...####",
"####....######....####",
"####...########...####",
".####.##########..####",
".####..####.#########.",
".#####..##...########.",
"..#####.......#######.",
"..######......######..",
"...###################",
"....##################",
"......###########.###.",
"........######.....#.."};


/* 
 *  Constructs a Config_Dialog as a child of 'parent', with the 
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
Config_Dialog::Config_Dialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
,
      image0( (const char **) image0_data ),
      image1( (const char **) image1_data )
{
    if ( !name )
	setName( "Config_Dialog" );
    setIcon( image0 );
    setSizeGripEnabled( TRUE );
    Config_DialogLayout = new QGridLayout( this, 1, 1, 11, 6, "Config_DialogLayout"); 

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    buttonHelp = new QPushButton( this, "buttonHelp" );
    buttonHelp->setAutoDefault( TRUE );
    Layout1->addWidget( buttonHelp );
    QSpacerItem* spacer = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( spacer );

    buttonApply = new QPushButton( this, "buttonApply" );
    buttonApply->setAutoDefault( TRUE );
    Layout1->addWidget( buttonApply );

    buttonOk = new QPushButton( this, "buttonOk" );
    QPalette pal;
    QColorGroup cg;
    cg.setColor( QColorGroup::Foreground, black );
    cg.setColor( QColorGroup::Button, QColor( 50, 50, 255) );
    cg.setColor( QColorGroup::Light, QColor( 177, 177, 255) );
    cg.setColor( QColorGroup::Midlight, QColor( 113, 113, 255) );
    cg.setColor( QColorGroup::Dark, QColor( 25, 25, 127) );
    cg.setColor( QColorGroup::Mid, QColor( 33, 33, 170) );
    cg.setColor( QColorGroup::Text, black );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, black );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, QColor( 50, 50, 255) );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 0, 0, 128) );
    cg.setColor( QColorGroup::HighlightedText, white );
    cg.setColor( QColorGroup::Link, black );
    cg.setColor( QColorGroup::LinkVisited, black );
    pal.setActive( cg );
    cg.setColor( QColorGroup::Foreground, black );
    cg.setColor( QColorGroup::Button, QColor( 50, 50, 255) );
    cg.setColor( QColorGroup::Light, QColor( 177, 177, 255) );
    cg.setColor( QColorGroup::Midlight, QColor( 88, 88, 255) );
    cg.setColor( QColorGroup::Dark, QColor( 25, 25, 127) );
    cg.setColor( QColorGroup::Mid, QColor( 33, 33, 170) );
    cg.setColor( QColorGroup::Text, black );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, black );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, QColor( 50, 50, 255) );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 0, 0, 128) );
    cg.setColor( QColorGroup::HighlightedText, white );
    cg.setColor( QColorGroup::Link, black );
    cg.setColor( QColorGroup::LinkVisited, black );
    pal.setInactive( cg );
    cg.setColor( QColorGroup::Foreground, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Button, QColor( 50, 50, 255) );
    cg.setColor( QColorGroup::Light, QColor( 177, 177, 255) );
    cg.setColor( QColorGroup::Midlight, QColor( 88, 88, 255) );
    cg.setColor( QColorGroup::Dark, QColor( 25, 25, 127) );
    cg.setColor( QColorGroup::Mid, QColor( 33, 33, 170) );
    cg.setColor( QColorGroup::Text, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, QColor( 50, 50, 255) );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 0, 0, 128) );
    cg.setColor( QColorGroup::HighlightedText, white );
    cg.setColor( QColorGroup::Link, black );
    cg.setColor( QColorGroup::LinkVisited, black );
    pal.setDisabled( cg );
    buttonOk->setPalette( pal );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout1->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout1->addWidget( buttonCancel );

    Config_DialogLayout->addLayout( Layout1, 1, 1 );

    configoverview = new QListView( this, "configoverview" );
    configoverview->addColumn( tr( "Configuration" ) );
    configoverview->header()->setResizeEnabled( FALSE, configoverview->header()->count() - 1 );
    configoverview->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)7, 0, 0, configoverview->sizePolicy().hasHeightForWidth() ) );
    configoverview->setResizeMode( QListView::AllColumns );

    Config_DialogLayout->addWidget( configoverview, 0, 0 );

    ConfigFrame = new Config_Frame( this, "ConfigFrame" );

    Config_DialogLayout->addWidget( ConfigFrame, 0, 1 );
    languageChange();
    resize( QSize(557, 370).expandedTo(minimumSizeHint()) );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( configoverview, SIGNAL( pressed(QListViewItem*) ), ConfigFrame, SLOT( changePage(QListViewItem*) ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
Config_Dialog::~Config_Dialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Config_Dialog::languageChange()
{
    setCaption( tr( "Configuration" ) );
    buttonHelp->setText( tr( "&Help" ) );
    buttonApply->setText( tr( "&Apply" ) );
    buttonOk->setCaption( QString::null );
    buttonOk->setText( tr( "&OK" ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    configoverview->header()->setLabel( 0, tr( "Configuration" ) );
    configoverview->clear();
    QListViewItem * item = new QListViewItem( configoverview, 0 );
    item->setText( 0, tr( "General" ) );

    item = new QListViewItem( configoverview, item );
    item->setText( 0, tr( "Erasing" ) );

}

