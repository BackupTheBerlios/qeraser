/****************************************************************************
** Form implementation generated from reading ui file 'manual_dialog.ui'
**
** Created: Sam Mai 3 12:50:21 2003
**      by: The User Interface Compiler ($Id: manual_dialog.cpp,v 1.1 2003/06/25 21:57:01 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "manual_dialog.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtextbrowser.h>
#include <qtoolbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

static const char* const image0_data[] = { 
"32 32 7 1",
". c None",
"e c #000039",
"# c #00007b",
"a c #0000ff",
"b c #2985de",
"c c #4a554a",
"d c #ffffbd",
"................................",
"..#abccccccccccccccccccc.....#ab",
"..#abcdddddddddddddddddc....##ab",
"..#abcdddddddeeeeedddddc....##ab",
"..##abcdddddde###edddddc...#a#ab",
"..##abcdddddde###eddddddc..#a#ab",
"..#a#acdddddde###eddddddc.#ab#ab",
"..#a#abdddddde###eddddddc.#b.#ab",
"..#ab#bdddddde###eddddddc#ab.#ab",
"..#ab#abdddddde#edddddddc#b..#ab",
"..#ab.#bdddddde#eddddddd#ab..#ab",
"..#ab.#abddddde#eddddddd#b...#ab",
"..#ab.#abddddde#edddddd#ab...#ab",
"..#ab..#abdddde#edddddd#bc...#ab",
"..#ab..#abdddde#eddddd#abc...#ab",
"..#ab..c#bdddddedddddd#bdc...#ab",
"..#ab..c#abdddddddddd#abdc...#ab",
"..#ab...c#bdddeeedddd#bddc...#ab",
"..#ab...c#abdde#eddd#abddc...#ab",
"..#ab...cd#bddeeeddd#bdddc...#ab",
"..#ab...cd#abdddddd#abdddc...#ab",
"..#ab...cd#abdddddd#bddddc...#ab",
"..#ab...cdd#bddddd#abddddc...#ab",
"..#ab...cdd#abdddd#bdddddc...#ab",
"..#ab...cddd#bddd#abdddddc...#ab",
"..#ab...cddd#abdd#bddddddc...#ab",
"..#ab...cdddd#bd#abddddddc...#ab",
"..#ab...cdddd#ab#bdddddddc...#ab",
"..#ab..cdddddd##abddddddcc...#ab",
"..#ab..cdddddd##abdddddc.....#ab",
"..#ab.cccccccccccccccccc.....#ab",
"................................"};

static const char* const image1_data[] = { 
"32 32 30 1",
". c None",
"# c #000000",
"m c #000400",
"g c #080c08",
"o c #181c18",
"e c #292c29",
"n c #293429",
"A c #393c00",
"b c #393c39",
"i c #4a4c39",
"w c #5a654a",
"d c #6a6d5a",
"h c #7b7d5a",
"l c #8b856a",
"q c #8b956a",
"s c #9ca57b",
"r c #acae7b",
"p c #acae8b",
"j c #acb68b",
"t c #bdbe8b",
"B c #bdc6bd",
"u c #cdce9c",
"y c #cdcecd",
"v c #dede9c",
"f c #dedede",
"x c #dee6de",
"z c #eee6ee",
"a c #eeeeee",
"c c #eef6ee",
"k c #ffffbd",
"................................",
"................................",
"................................",
"................................",
"................................",
"..............#.................",
".......ab##c.#d#................",
".......ce##fgehi#...............",
".......ceeegejklbm..............",
".......cneoepkkkqnm.............",
"........#eerkkkkkseg............",
".......f#erkkkkkkkpeg...........",
".......mnskkkkkkkkkteg..........",
"......mnskkkkkkkkkkkung.........",
".....mbskkkkkkkkkkkkkvw#........",
"....##################m##.......",
"...#.gnxfffffffffffffanm.#......",
".....meyfffffffffffffanm........",
".....#ezfffffffffffffae#........",
".....#ezfffffffffffffae#........",
".....#ezfffffffffffffae#........",
".....#ezfff#######fffae#........",
".....#ezfff#AAAAA#fffae#........",
".....#ezfff#AAAAA#fffze#........",
".....#ezfff#AAAAA#fffxe#........",
".....#eyfff#AAAAA#fffxn#........",
".....#nBfff#AAAAA#ffffn#........",
".....###################........",
"................................",
"................................",
"................................",
"................................"};

static const char* const image2_data[] = { 
"32 32 5 1",
". c None",
"c c #4a554a",
"b c #9c9d9c",
"a c #bdbebd",
"# c #ffffff",
"................................",
"............#...................",
"..........###...................",
".......######...................",
"....##########..................",
".#############....aaaaa.........",
"..#############.aabbbbba........",
"..###########aaabbaaaaba........",
"...#######aaabbbaaaaaaba........",
"...####aaabbbaaaaaaaaabba.......",
"...#aaabbbaaaaaaaaaaababa.......",
"...aaaaabaaaaaaaaaabbaabb.......",
"..aaaaaabaaaaaaaabbaaabab.......",
"..aaaaaaabaaaaaabaaabbaab.......",
"..aaaaaaabaaaabbaabbaaaab.......",
"..aaaaaaaababbaaab.##aaaba......",
"..aaaaaaaabbaaabb###c#aaaba.....",
"..aaaaaaaaabbbb.###c#c#aaabaa...",
"..aaaaaaaaabbaa##cc#c###aaabaa..",
"..aaaaaaaaabaa##c##c##c##aaabaa.",
"..aaaaaaaaab##cc##c##c#cc#aaaba.",
"....aaaaaaaba####c##c#c###aabaa.",
".....aaaaabba.##c####c###abbaa..",
".......aaaaaba.#########bbaa....",
"........aaaaaba.######bbaa......",
"..........aaaaba.###bbaa........",
"...........aaaaba.bbaa..........",
".............aaabbaa............",
"..............aaaa..............",
"................................",
"................................",
"................................"};

static const char* const image3_data[] = { 
"32 32 4 1",
". c None",
"# c #000000",
"a c #4a554a",
"b c #7b7d7b",
"................................",
"................................",
"................................",
"................................",
"................................",
"................#...............",
"..............##a...............",
"............##aab...............",
"..........##aabb................",
"........##aabb..................",
"......##aabb....................",
"....###########################.",
"..##aaaaaaaaaaaaaaaaaaaaaaaaaaa.",
"....##aabbbbbbbbbbbbbbbbbbbbbbb.",
"......##aabb....................",
"........##aabb..................",
"..........##aabb................",
"............##aab...............",
"..............##a...............",
"................#...............",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................"};

static const char* const image4_data[] = { 
"32 32 4 1",
". c None",
"# c #000000",
"a c #4a554a",
"b c #7b7d7b",
"................................",
"................................",
"................................",
"................................",
"................................",
"...............#................",
"...............a##..............",
"...............baa##............",
"................bbaa##..........",
"..................bbaa##........",
"....................bbaa##......",
".###########################....",
".aaaaaaaaaaaaaaaaaaaaaaaaaaa##..",
".bbbbbbbbbbbbbbbbbbbbbbbaa##....",
"....................bbaa##......",
"..................bbaa##........",
"................bbaa##..........",
"...............baa##............",
"...............a##..............",
"...............#................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................"};


/* 
 *  Constructs a Manual_Dialog as a child of 'parent', with the 
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
Manual_Dialog::Manual_Dialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
,
      image0( (const char **) image0_data ),
      image1( (const char **) image1_data ),
      image2( (const char **) image2_data ),
      image3( (const char **) image3_data ),
      image4( (const char **) image4_data )
{
    if ( !name )
	setName( "Manual_Dialog" );
    setIcon( image0 );
    Manual_DialogLayout = new QGridLayout( this, 1, 1, 2, 2, "Manual_DialogLayout"); 

    content_button = new QToolButton( this, "content_button" );
    content_button->setPixmap( image1 );

    Manual_DialogLayout->addWidget( content_button, 0, 3 );

    manualbrowser = new QTextBrowser( this, "manualbrowser" );
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
    manualbrowser->setPalette( pal );

    Manual_DialogLayout->addMultiCellWidget( manualbrowser, 1, 1, 0, 6 );

    print_button = new QToolButton( this, "print_button" );
    print_button->setPixmap( image2 );

    Manual_DialogLayout->addWidget( print_button, 0, 0 );

    backward_button = new QToolButton( this, "backward_button" );
    backward_button->setPixmap( image3 );

    Manual_DialogLayout->addWidget( backward_button, 0, 2 );

    close_button = new QPushButton( this, "close_button" );

    Manual_DialogLayout->addWidget( close_button, 0, 6 );

    forward_button = new QToolButton( this, "forward_button" );
    forward_button->setPixmap( image4 );

    Manual_DialogLayout->addWidget( forward_button, 0, 4 );
    QSpacerItem* spacer = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Manual_DialogLayout->addItem( spacer, 0, 1 );
    QSpacerItem* spacer_2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Manual_DialogLayout->addItem( spacer_2, 0, 5 );
    languageChange();
    resize( QSize(542, 489).expandedTo(minimumSizeHint()) );

    // signals and slots connections
    connect( backward_button, SIGNAL( clicked() ), manualbrowser, SLOT( backward() ) );
    connect( forward_button, SIGNAL( clicked() ), manualbrowser, SLOT( forward() ) );
    connect( content_button, SIGNAL( clicked() ), manualbrowser, SLOT( home() ) );
    connect( close_button, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( print_button, SIGNAL( clicked() ), this, SLOT( print() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
Manual_Dialog::~Manual_Dialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Manual_Dialog::languageChange()
{
    setCaption( tr( "Manual" ) );
    content_button->setText( QString::null );
    manualbrowser->setSource( QString::null );
    print_button->setText( QString::null );
    backward_button->setText( QString::null );
    close_button->setText( tr( "Close" ) );
    forward_button->setText( QString::null );
}

void Manual_Dialog::print()
{
    qWarning( "Manual_Dialog::print(): Not implemented yet" );
}

