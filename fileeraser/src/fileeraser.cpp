/****************************************************************************
** Form implementation generated from reading ui file 'fileeraser.ui'
**
** Created: Sam Mai 3 12:50:10 2003
**      by: The User Interface Compiler ($Id: fileeraser.cpp,v 1.1 2003/06/25 21:56:59 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "fileeraser.h"

#include <qvariant.h>
#include <qcombobox.h>
#include <qlabel.h>
#include <qprogressbar.h>
#include <qpushbutton.h>
#include <qtextedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

static const char* const image0_data[] = { 
"32 32 2 1",
". c None",
"# c #ff0000",
"................................",
"............########............",
".........###...##...###.........",
"........#......##......#........",
"......##.......##.......##......",
".....#.........##.........#.....",
"....#..........##..........#....",
"....#..........##..........#....",
"...#...........##...........#...",
"..#............##............#..",
"..#............##............#..",
"..#............##............#..",
".#.............##.............#.",
".#.............##.............#.",
".#.............##.............#.",
".##############################.",
".#.............##.............#.",
".#.............##.............#.",
".#.............##.............#.",
".#.............##.............#.",
"..#............##............#..",
"..#............##............#..",
"..#............##............#..",
"...#...........##...........#...",
"....#..........##..........#....",
"....#..........##..........#....",
".....#.........##.........#.....",
"......##.......##.......##......",
"........#......##......#........",
".........###...##...###.........",
"............########............",
"................................"};


/* 
 *  Constructs a fileeraser as a child of 'parent', with the 
 *  name 'name' and widget flags set to 'f'.
 */
fileeraser::fileeraser( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl ),
      image0( (const char **) image0_data )
{
    if ( !name )
	setName( "FileEraser" );
    setPaletteForegroundColor( QColor( 0, 0, 0 ) );
    setIcon( image0 );
    FileEraserLayout = new QGridLayout( this, 1, 1, 3, 4, "FileEraserLayout"); 

    Layout1 = new QGridLayout( 0, 1, 1, 0, 2, "Layout1"); 

    mycombo = new QComboBox( FALSE, this, "mycombo" );
    mycombo->setMaximumSize( QSize( 32767, 20 ) );
    mycombo->setAcceptDrops( TRUE );
    mycombo->setEditable( TRUE );
    mycombo->setDuplicatesEnabled( FALSE );

    Layout1->addMultiCellWidget( mycombo, 2, 2, 0, 3 );

    file_button = new QPushButton( this, "file_button" );

    Layout1->addWidget( file_button, 1, 3 );

    mylabel = new QLabel( this, "mylabel" );
    mylabel->setEnabled( TRUE );
    QFont mylabel_font(  mylabel->font() );
    mylabel_font.setFamily( "Courier [Adobe]" );
    mylabel_font.setPointSize( 28 );
    mylabel_font.setBold( TRUE );
    mylabel->setFont( mylabel_font ); 
    mylabel->setTextFormat( QLabel::AutoText );
    mylabel->setScaledContents( FALSE );
    mylabel->setAlignment( int( QLabel::WordBreak | QLabel::AlignCenter ) );

    Layout1->addMultiCellWidget( mylabel, 0, 0, 0, 3 );

    erase_button = new QPushButton( this, "erase_button" );

    Layout1->addWidget( erase_button, 1, 0 );

    mymultiline = new QTextEdit( this, "mymultiline" );
    mymultiline->setReadOnly( TRUE );

    Layout1->addMultiCellWidget( mymultiline, 3, 3, 0, 3 );

    clear_button = new QPushButton( this, "clear_button" );

    Layout1->addWidget( clear_button, 1, 1 );

    remove_button = new QPushButton( this, "remove_button" );

    Layout1->addWidget( remove_button, 1, 2 );

    FileEraserLayout->addMultiCellLayout( Layout1, 0, 0, 0, 2 );

    Layout2 = new QVBoxLayout( 0, 0, 0, "Layout2"); 

    file_erase_progress = new QProgressBar( this, "file_erase_progress" );
    file_erase_progress->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, file_erase_progress->sizePolicy().hasHeightForWidth() ) );
    file_erase_progress->setMaximumSize( QSize( 32767, 10 ) );
    file_erase_progress->setPercentageVisible( FALSE );
    Layout2->addWidget( file_erase_progress );

    total_erase_progress = new QProgressBar( this, "total_erase_progress" );
    total_erase_progress->setMaximumSize( QSize( 32767, 10 ) );
    total_erase_progress->setPercentageVisible( FALSE );
    Layout2->addWidget( total_erase_progress );

    FileEraserLayout->addMultiCellLayout( Layout2, 1, 1, 0, 2 );

    Layout4 = new QGridLayout( 0, 1, 1, 0, 2, "Layout4"); 

    quit_button = new QPushButton( this, "quit_button" );
    quit_button->setMaximumSize( QSize( 32767, 30 ) );

    Layout4->addWidget( quit_button, 0, 0 );

    config_button = new QPushButton( this, "config_button" );
    config_button->setMaximumSize( QSize( 32767, 30 ) );

    Layout4->addWidget( config_button, 0, 1 );

    FileEraserLayout->addLayout( Layout4, 2, 0 );

    Layout3 = new QGridLayout( 0, 1, 1, 0, 0, "Layout3"); 

    info_button = new QPushButton( this, "info_button" );
    info_button->setMaximumSize( QSize( 32767, 15 ) );

    Layout3->addWidget( info_button, 1, 0 );

    manual_button = new QPushButton( this, "manual_button" );
    manual_button->setMaximumSize( QSize( 32767, 15 ) );

    Layout3->addWidget( manual_button, 0, 0 );

    FileEraserLayout->addLayout( Layout3, 2, 2 );
    QSpacerItem* spacer = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    FileEraserLayout->addItem( spacer, 2, 1 );
    languageChange();
    resize( QSize(322, 412).expandedTo(minimumSizeHint()) );

    // signals and slots connections
    connect( mycombo, SIGNAL( textChanged(const QString&) ), this, SLOT( fit_droping() ) );
    connect( clear_button, SIGNAL( clicked() ), this, SLOT( clear_list() ) );
    connect( remove_button, SIGNAL( clicked() ), this, SLOT( remove_item() ) );
    connect( file_button, SIGNAL( clicked() ), this, SLOT( browse_files() ) );
    connect( erase_button, SIGNAL( clicked() ), this, SLOT( handle_file_erasing() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
fileeraser::~fileeraser()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void fileeraser::languageChange()
{
    setCaption( tr( "FileEraser" ) );
    setIconText( QString::null );
    file_button->setText( tr( "Browse" ) );
    mylabel->setText( tr( "FileEraser" ) );
    erase_button->setText( tr( "Start" ) );
    clear_button->setText( tr( "Clear list" ) );
    remove_button->setText( tr( "Rem. of list" ) );
    quit_button->setText( tr( "Quit" ) );
    config_button->setText( tr( "Configuration" ) );
    info_button->setText( tr( "Info" ) );
    manual_button->setText( tr( "Manual" ) );
}

void fileeraser::browse_files()
{
    qWarning( "fileeraser::browse_files(): Not implemented yet" );
}

void fileeraser::clear_list()
{
    qWarning( "fileeraser::clear_list(): Not implemented yet" );
}

void fileeraser::fit_droping()
{
    qWarning( "fileeraser::fit_droping(): Not implemented yet" );
}

void fileeraser::remove_item()
{
    qWarning( "fileeraser::remove_item(): Not implemented yet" );
}

void fileeraser::handle_file_erasing()
{
    qWarning( "fileeraser::handle_file_erasing(): Not implemented yet" );
}

