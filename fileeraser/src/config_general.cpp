/****************************************************************************
** Form implementation generated from reading ui file 'config_general.ui'
**
** Created: Sam Mai 3 12:50:02 2003
**      by: The User Interface Compiler ($Id: config_general.cpp,v 1.1 2003/06/25 21:56:57 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "config_general.h"

#include <qvariant.h>
#include <qcombobox.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/* 
 *  Constructs a Config_General as a child of 'parent', with the 
 *  name 'name' and widget flags set to 'f'.
 */
Config_General::Config_General( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "Config_General" );
    Config_GeneralLayout = new QGridLayout( this, 1, 1, 2, 0, "Config_GeneralLayout"); 

    GroupBox_general = new QGroupBox( this, "GroupBox_general" );
    GroupBox_general->setColumnLayout(0, Qt::Vertical );
    GroupBox_general->layout()->setSpacing( 6 );
    GroupBox_general->layout()->setMargin( 11 );
    GroupBox_generalLayout = new QGridLayout( GroupBox_general->layout() );
    GroupBox_generalLayout->setAlignment( Qt::AlignTop );

    GroupBox_look = new QGroupBox( GroupBox_general, "GroupBox_look" );

    TextLabel1 = new QLabel( GroupBox_look, "TextLabel1" );
    TextLabel1->setGeometry( QRect( 50, 30, 120, 20 ) );

    PushButton_background_colour = new QPushButton( GroupBox_look, "PushButton_background_colour" );
    PushButton_background_colour->setGeometry( QRect( 10, 30, 30, 20 ) );

    GroupBox_generalLayout->addWidget( GroupBox_look, 1, 0 );

    GroupBox_lang = new QGroupBox( GroupBox_general, "GroupBox_lang" );
    GroupBox_lang->setColumnLayout(0, Qt::Vertical );
    GroupBox_lang->layout()->setSpacing( 6 );
    GroupBox_lang->layout()->setMargin( 11 );
    GroupBox_langLayout = new QGridLayout( GroupBox_lang->layout() );
    GroupBox_langLayout->setAlignment( Qt::AlignTop );

    ComboBox_language = new QComboBox( FALSE, GroupBox_lang, "ComboBox_language" );

    GroupBox_langLayout->addWidget( ComboBox_language, 1, 0 );

    label_selectlan = new QLabel( GroupBox_lang, "label_selectlan" );

    GroupBox_langLayout->addWidget( label_selectlan, 0, 0 );

    GroupBox_generalLayout->addWidget( GroupBox_lang, 0, 0 );

    Config_GeneralLayout->addWidget( GroupBox_general, 0, 0 );
    languageChange();
    resize( QSize(592, 480).expandedTo(minimumSizeHint()) );

    // signals and slots connections
    connect( PushButton_background_colour, SIGNAL( pressed() ), this, SLOT( selectColour() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
Config_General::~Config_General()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Config_General::languageChange()
{
    setCaption( tr( "General" ) );
    GroupBox_general->setTitle( tr( "General" ) );
    GroupBox_look->setTitle( tr( "Look" ) );
    TextLabel1->setText( tr( "Background colour" ) );
    PushButton_background_colour->setText( QString::null );
    GroupBox_lang->setTitle( tr( "Language" ) );
    label_selectlan->setText( tr( "Select your language" ) );
}

void Config_General::selectColour()
{
    qWarning( "Config_General::selectColour(): Not implemented yet" );
}

