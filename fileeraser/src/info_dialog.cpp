/****************************************************************************
** Form implementation generated from reading ui file 'info_dialog.ui'
**
** Created: Sam Mai 3 12:50:05 2003
**      by: The User Interface Compiler ($Id: info_dialog.cpp,v 1.1 2003/06/25 21:56:58 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "info_dialog.h"

#include <qvariant.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qpushbutton.h>
#include <qtextbrowser.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

static const char* const image0_data[] = { 
"32 32 4 1",
". c None",
"a c #00006a",
"# c #0000bd",
"b c #ff0000",
"................................",
"............#######aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#######aaa..........",
"................................",
"................................",
"............#######aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#bbbbb#aaa..........",
"............#######aaa..........",
"................................"};

static const char* const image1_data[] = { 
"246 47 16 1",
". c None",
"c c #08045a",
"l c #080c00",
"m c #081408",
"e c #182418",
"n c #292439",
"k c #393c29",
"b c #4a3c7b",
"i c #5a5d4a",
"d c #7b7d6a",
"j c #7b7dac",
"f c #acaeac",
"h c #acaebd",
"g c #cdcecd",
"a c #dedede",
"# c #eef6ee",
"......................................................................................................................................................................................................................................................",
"...........#aa.....................aaaaaa.............................................................................................................................................................................................................",
"...........bcb#...................acccccb............................................deeef..................................deeeg.........hiiif.............................................................................................#hddg.....",
"..........#bccj...................gcccccj............................................klllg..................................kllma.........illlf............................................................................................#i...if....",
"..........acccca..................fcccccf...........................................#ellm#.................................#ellk#.........klllg............................................................................................dfgdd.dh...",
"..........hccccb..................jcccccg...........................................gmllk..................................gllli.........#elle#...........................................................................................#k#kif..d...",
"..........jcccccg.................bccccca...........................................fllli..................................fllld.........glllk............................................................................................#k#k...ai...",
"..........jcccccb#...............#cccccb#...........................................dlllf..................................dlllh.........fllld.............................................................................................iggii..f...",
".........#bcccccch...............acccccb............................................klllg..................................kllma.........illlf.............................................................................................gkg#.fi#...",
".........acccccccb#..............hcccccj...........................................#ellma..................................gggg..........kllma..............................................................................................aikid#....",
".........gccccccccj..............jccccch...........................................glllk................................................amlle#................................................................................................#.......",
".........hccccccccca.............bccccca...............#aghffhg#...................fllli.....#agfffga#..................................gllli.........................................................................................................",
".........jcccccccccj............#bccccc#............#hikmllllllekda................dlllj..#hikmlllllleifa.................hddda..gddddddilllkdddddda..........................#############...#################.......................................",
".........bccccccccccg...........acccccb#..........#delllllllllllllmia..............klllg#fkllllllllllllleda...............illla..dlllllllllllllllllg.........................llllllllllllll#..deeeeeeeeeeeeeeeeg............hbbbbbbbbbbbbbbbbbbbbbbbh.",
"........#cccccccccccb#..........gcccccj..........helllllllllllllllllef............#ellmgkllllllllllllllllleh.............#elle#..illllllllllllllllea........................lllllllllllllll...gmllllllllllllllli............jcccccccccccccccccccccccj.",
"........acccccbcccccch..........hcccccj........#dlllllleifggghdimllllld...........glllmmllllmkdfgggfdklllllmf............amlli..#kllllllllllllllllk.........................ll.................illlllllllllllllla...........jcccccccccccccccccccccccj.",
"........hcccccjjcccccb#.........jccccch.......#illlllkh#........admlllld..........flllllllmda.........gilllllj...........hllld...aaaaaahllliaaaaaa#........................lll.............ll..hlllllllllllllllld...........jcccccccccccccccccccccccj.",
"........jcccccgaccccccj.........bccccca.......dllllef.............gkllllf.........illllllkg.............felllmh..........dlllf.........fllld...............................ll.............lll..#klllllllllllllllea..........jcccccccccccccccccccccccj.",
"........bccccca.jcccccca........cccccc.......flllleg...............aklllea........klllllk#...............gelllea.........illma.........illlh..............................#ll.............ll#...flllllllllllllllld..........jcccccccccccccccccccccccj.",
"........bccccb#.#bcccccj.......acccccb......gmlllea.................aellli........mllllk#.................hlllli.........elle..........kllla..............................ll..............ll....#kllllllllllllllle#.........jcccccccccccccccccccccccj.",
".......#cccccb...hcccccca......hcccccj......klllmg...................flllma......gllllka...................dlllma.......amlli.........#elle..............................#ll.............ll#.....dllllllllllllllllf.........jcccccccccccccccccccccccj.",
".......gcccccj...#bcccccb......jccccch.....hlllld....................#klllj......flllmh....................amllld.......hllld.........gllli..............................ll.............lll......aelllllllllllllllk#........jcccccccccccccccccccccccj.",
".......hccccch....gccccccg.....bcccccg.....kllle#.....................flllk......illli......................illlk.......dlllf.........fllld..............................ll.............lll.......dllllllllllllllllh........jcccccccccccccccccccccccj.",
".......jcccccg.....bcccccb#....bccccc#....alllld......................amllm#.....kllmg......................flllm#......kllma.........illlf.............................ll..............ll........amlllllllllllllllk........jcccccccccccccccccccccccj.",
".......bccccc#.....acccccch...#cccccb.....jlllma......................#elllg....#ellk#......................gllllg.....#elle#.........kllma.............................ll.............lll.........illlllllllllllllmg.......jcccccccccccccccccccccccj.",
".......nccccb.......jcccccb#..gcccccb.....illlk########################klllh....gllld.......................amlllh.....alllk.........#elle#............................lll.............ll..........glllllllllllllllli.......jcccccccccccccccccccccccj.",
"......acccccb.......ancccccj..hcccccj....#elllmeeeeeeeeeeeeeeeeeeeeeeeemlllf....flllh.......................#mlllf.....fllld.........gllli.............................ll.............lll...........klllllllllllllllma......jcccccccccccccccccccccccj.",
"......hcccccj........jcccccca.jccccch....amllllllllllllllllllllllllllllllllj....illla.......................#mlllf.....dlllf.........fllld............................lll.............ll............hlllllllllllllllld......jcccccccccccccccccccccccj.",
"......jccccch........#bcccccj.bccccca....glllllllllllllllllllllllllllllllllj....kllm#.......................amlllh.....kllma.........illlf............................ll..............ll............#klllllllllllllllea.....jcccccccccccccccccccccccj.",
"......bccccca.........hccccccgcccccc#....glllliiiiiiiiiiiiiiiiiiiiiiiiiiiiig...#mlle#.......................gllllg....#elle#.........kllma...........................#ll.............ll#.............flllllllllllllllld.....jcccccccccccccccccccccccj.",
"......bccccc#.........#bcccccbcccccb.....glllla................................gllle#.......................flllma....allli.........#mlle#...........................ll..............ll..............#ellllllllllllllle#....jcccccccccccccccccccccccj.",
".....#cccccb...........gcccccccccccj.....amlllg................................flllma.......................illlk.....fllld.........glllk...........................#ll.............ll#...............dllllllllllllllllf....jcccccccccccccccccccccccj.",
".....acccccb............bcccccccccch.....aelllf................................illllg......................amllld.....dlllf.........fllld...........................ll..............ll................aelllllllllllllllk#...jcccccccccccccccccccccccj.",
".....hcccccj............accccccccccg.....#kllli......................gffffa...#kllllf......................dllllg.....kllma.........illlf...........................ll.............lll.................illllllllllllllllg...jcccccccccccccccccccccccj.",
".....jccccch.............jccccccccca......dllle#....................#elllk#...aellllk.....................aelllk.....#elle#.........kllma..........................ll.............lll..................gmllllllllllllllli...jcccccccccccccccccccccccj.",
".....bccccca.............ancccccccb#......gllllf....................dllllf....glllllmg....................illllf.....glllk.........#mlle#..........................ll.............lll...................illlllllllllllllmg..jcccccccccccccccccccccccj.",
"....#cccccc#..............jcccccccb.......#klllk#..................hmlllk#....flllllli...................fmlllk#.....fllld.........gllli..........................lll.............ll....................glllllllllllllllld..jcccccccccccccccccccccccj.",
"....acccccb...............#bccccccj........flllld.................gelllmh.....illlllllf.................gelllmg......dlllf.........fllld..........................ll.............lll.....................kllllllllllllllli..jcccccccccccccccccccccccj.",
"....gcccccj................hcccccch........#klllld...............gelllld......klllklllmf...............fellllj.......kllla.........illlf.........................#ll.............ll#.....................fllllllllllllllli..jcccccccccccccccccccccccj.",
"....jcccccf................#bccccca.........aelllli#...........#fellllk#.....amlllgelllmd#...........admlllld.......#elle#........#kllla.........................ll.............lll......................#klllllllllllllli..jcccccccccccccccccccccccj.",
"....bcccccg.................gccccc#..........gellllkfa.......afklllllka......gllle.gmllllkf#.......adellllld#.......glllk.........aelle#........................#ll.............ll#.......................jlllllllllllllli..jcccccccccccccccccccccccj.",
"...#bccccca..................bcccb............gellllleidjjddkelllllli#.......jllli..fellllleidjjdikmlllllmj.........fllld.........gllli.........................ll..............ll........................#ellllllllllllli..jcccccccccccccccccccccccj.",
"...#cccccb#..................acccj.............ailllllllllllllllllef#........illld...gklllllllllllllllllkg..........illlf.........jllld.........................lllllllllllllllll#.........................dllllllllllllli..jcccccccccccccccccccccccj.",
"...gcccccb....................jccj...............hkllllllllllllleda.........#klllh....#jelllllllllllllkf#...........kllla.........illlh........................#lllllllllllllllll..........................#ggggggggggggga..aggggggggggggggggggggggga.",
"...aggggga....................abbg.................gdkemllmmekdh#............ghhg#......#hdkemllmmeidg..............ghhg#.........ghhh#...............................................................................................................",
".......................................................aaaaa#...............................#aaaaa....................................................................................................................................................",
"......................................................................................................................................................................................................................................................"};


/* 
 *  Constructs a Info_Dialog as a child of 'parent', with the 
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
Info_Dialog::Info_Dialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
,
      image0( (const char **) image0_data ),
      image1( (const char **) image1_data )
{
    if ( !name )
	setName( "Info_Dialog" );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, sizePolicy().hasHeightForWidth() ) );
    setMinimumSize( QSize( 320, 460 ) );
    setIcon( image0 );
    Info_DialogLayout = new QGridLayout( this, 1, 1, 5, 6, "Info_DialogLayout"); 
    QSpacerItem* spacer = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Info_DialogLayout->addItem( spacer, 0, 0 );

    NebitLogo = new QLabel( this, "NebitLogo" );
    NebitLogo->setPixmap( image1 );
    NebitLogo->setScaledContents( FALSE );
    NebitLogo->setAlignment( int( QLabel::AlignCenter ) );

    Info_DialogLayout->addMultiCellWidget( NebitLogo, 0, 0, 0, 2 );

    contactinfo = new QGroupBox( this, "contactinfo" );

    contactlabel2 = new QLabel( contactinfo, "contactlabel2" );
    contactlabel2->setGeometry( QRect( 140, 20, 150, 20 ) );
    contactlabel2->setIndent( -1 );

    contactlabel = new QLabel( contactinfo, "contactlabel" );
    contactlabel->setGeometry( QRect( 10, 20, 120, 20 ) );

    Info_DialogLayout->addMultiCellWidget( contactinfo, 4, 4, 0, 2 );

    programversioncopyright = new QLabel( this, "programversioncopyright" );
    QFont programversioncopyright_font(  programversioncopyright->font() );
    programversioncopyright_font.setUnderline( TRUE );
    programversioncopyright->setFont( programversioncopyright_font ); 
    programversioncopyright->setScaledContents( FALSE );
    programversioncopyright->setAlignment( int( QLabel::AlignCenter ) );

    Info_DialogLayout->addMultiCellWidget( programversioncopyright, 1, 1, 0, 2 );

    GPLBox = new QGroupBox( this, "GPLBox" );
    GPLBox->setColumnLayout(0, Qt::Vertical );
    GPLBox->layout()->setSpacing( 6 );
    GPLBox->layout()->setMargin( 5 );
    GPLBoxLayout = new QGridLayout( GPLBox->layout() );
    GPLBoxLayout->setAlignment( Qt::AlignTop );

    GPLbrowser = new QTextBrowser( GPLBox, "GPLbrowser" );
    QFont GPLbrowser_font(  GPLbrowser->font() );
    GPLbrowser->setFont( GPLbrowser_font ); 
    GPLbrowser->setAcceptDrops( FALSE );
    GPLbrowser->setLineWidth( 2 );
    GPLbrowser->setMargin( 0 );
    GPLbrowser->setResizePolicy( QTextBrowser::Manual );
    GPLbrowser->setHScrollBarMode( QTextBrowser::Auto );
    GPLbrowser->setDragAutoScroll( TRUE );
    GPLbrowser->setTextFormat( QTextBrowser::AutoText );

    GPLBoxLayout->addWidget( GPLbrowser, 0, 0 );

    Info_DialogLayout->addMultiCellWidget( GPLBox, 2, 2, 0, 2 );

    creditsBox = new QGroupBox( this, "creditsBox" );
    creditsBox->setColumnLayout(0, Qt::Vertical );
    creditsBox->layout()->setSpacing( 6 );
    creditsBox->layout()->setMargin( 5 );
    creditsBoxLayout = new QGridLayout( creditsBox->layout() );
    creditsBoxLayout->setAlignment( Qt::AlignTop );

    creditsbrowser = new QTextBrowser( creditsBox, "creditsbrowser" );

    creditsBoxLayout->addWidget( creditsbrowser, 0, 0 );

    Info_DialogLayout->addMultiCellWidget( creditsBox, 3, 3, 0, 2 );

    close_button = new QPushButton( this, "close_button" );

    Info_DialogLayout->addWidget( close_button, 5, 1 );
    QSpacerItem* spacer_2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Info_DialogLayout->addItem( spacer_2, 5, 0 );
    QSpacerItem* spacer_3 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Info_DialogLayout->addItem( spacer_3, 5, 2 );
    languageChange();
    resize( QSize(320, 460).expandedTo(minimumSizeHint()) );

    // signals and slots connections
    connect( close_button, SIGNAL( clicked() ), this, SLOT( accept() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
Info_Dialog::~Info_Dialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Info_Dialog::languageChange()
{
    setCaption( tr( "Info" ) );
    contactinfo->setTitle( tr( "Contact Information" ) );
    contactlabel2->setText( tr( "http://www.nebit.de" ) );
    contactlabel->setText( tr( "Nebit Homepage:" ) );
    programversioncopyright->setText( tr( "File_eraser v.0.85 is copyrighted (c) by Nebit" ) );
    GPLBox->setTitle( tr( "GNU General Public License" ) );
    GPLbrowser->setText( QString::null );
    creditsBox->setTitle( tr( "Credits" ) );
    close_button->setText( tr( "Close" ) );
}

