/****************************************************************************
** Form implementation generated from reading ui file 'config_erasing.ui'
**
** Created: Son Apr 20 20:57:53 2003
**      by: The User Interface Compiler ($Id: config_erasing.cpp,v 1.1 2003/06/25 21:57:06 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "config_erasing.h"

#include <qvariant.h>
#include <qbuttongroup.h>
#include <qcheckbox.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qradiobutton.h>
#include <qspinbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/* 
 *  Constructs a Config_Erasing as a child of 'parent', with the 
 *  name 'name' and widget flags set to 'f'.
 */
Config_Erasing::Config_Erasing( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "Config_Erasing" );
    Config_ErasingLayout = new QGridLayout( this, 1, 1, 2, 0, "Config_ErasingLayout"); 

    GroupBox_erasing = new QGroupBox( this, "GroupBox_erasing" );
    GroupBox_erasing->setColumnLayout(0, Qt::Vertical );
    GroupBox_erasing->layout()->setSpacing( 6 );
    GroupBox_erasing->layout()->setMargin( 11 );
    GroupBox_erasingLayout = new QGridLayout( GroupBox_erasing->layout() );
    GroupBox_erasingLayout->setAlignment( Qt::AlignTop );

    GroupBox_general = new QGroupBox( GroupBox_erasing, "GroupBox_general" );
    GroupBox_general->setColumnLayout(0, Qt::Vertical );
    GroupBox_general->layout()->setSpacing( 6 );
    GroupBox_general->layout()->setMargin( 11 );
    GroupBox_generalLayout = new QGridLayout( GroupBox_general->layout() );
    GroupBox_generalLayout->setAlignment( Qt::AlignTop );

    SpinBox_overwriting = new QSpinBox( GroupBox_general, "SpinBox_overwriting" );
    SpinBox_overwriting->setMaxValue( 999 );

    GroupBox_generalLayout->addWidget( SpinBox_overwriting, 0, 1 );

    TextLabel1 = new QLabel( GroupBox_general, "TextLabel1" );

    GroupBox_generalLayout->addWidget( TextLabel1, 0, 0 );

    CheckBox_only_erase = new QCheckBox( GroupBox_general, "CheckBox_only_erase" );

    GroupBox_generalLayout->addWidget( CheckBox_only_erase, 1, 0 );

    CheckBox_erase_filenames = new QCheckBox( GroupBox_general, "CheckBox_erase_filenames" );

    GroupBox_generalLayout->addWidget( CheckBox_erase_filenames, 2, 0 );

    GroupBox_erasingLayout->addWidget( GroupBox_general, 0, 0 );

    ButtonGroup_pattern = new QButtonGroup( GroupBox_erasing, "ButtonGroup_pattern" );
    ButtonGroup_pattern->setColumnLayout(0, Qt::Vertical );
    ButtonGroup_pattern->layout()->setSpacing( 6 );
    ButtonGroup_pattern->layout()->setMargin( 11 );
    ButtonGroup_patternLayout = new QGridLayout( ButtonGroup_pattern->layout() );
    ButtonGroup_patternLayout->setAlignment( Qt::AlignTop );

    CheckBox_use_pattern = new QRadioButton( ButtonGroup_pattern, "CheckBox_use_pattern" );
    CheckBox_use_pattern->setEnabled( TRUE );
    CheckBox_use_pattern->setChecked( FALSE );

    ButtonGroup_patternLayout->addWidget( CheckBox_use_pattern, 0, 0 );

    CheckBox_random_overwriting = new QRadioButton( ButtonGroup_pattern, "CheckBox_random_overwriting" );

    ButtonGroup_patternLayout->addMultiCellWidget( CheckBox_random_overwriting, 1, 1, 0, 1 );

    patternedit = new QLineEdit( ButtonGroup_pattern, "patternedit" );

    ButtonGroup_patternLayout->addWidget( patternedit, 0, 1 );

    GroupBox_erasingLayout->addWidget( ButtonGroup_pattern, 1, 0 );

    Config_ErasingLayout->addWidget( GroupBox_erasing, 0, 0 );
    languageChange();
    resize( QSize(592, 479).expandedTo(minimumSizeHint()) );

    // signals and slots connections
    connect( CheckBox_random_overwriting, SIGNAL( toggled(bool) ), patternedit, SLOT( setDisabled(bool) ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
Config_Erasing::~Config_Erasing()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Config_Erasing::languageChange()
{
    setCaption( tr( "Erasing" ) );
    GroupBox_erasing->setTitle( tr( "Erasing" ) );
    GroupBox_general->setTitle( tr( "General" ) );
    TextLabel1->setText( tr( "Times of overwriting" ) );
    CheckBox_only_erase->setText( tr( "Only erase (Don't delete the files)" ) );
    CheckBox_erase_filenames->setText( tr( "Erase filenames" ) );
    ButtonGroup_pattern->setTitle( tr( "Overwriting-Pattern" ) );
    CheckBox_use_pattern->setText( tr( "Use Pattern" ) );
    CheckBox_random_overwriting->setText( tr( "Random Overwriting" ) );
    QToolTip::add( CheckBox_random_overwriting, QString::null );
    QWhatsThis::add( CheckBox_random_overwriting, tr( "jkashklhs" ) );
    patternedit->setText( QString::null );
}

