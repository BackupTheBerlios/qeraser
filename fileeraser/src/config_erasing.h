/****************************************************************************
** Form interface generated from reading ui file 'config_erasing.ui'
**
** Created: Sam Mai 3 12:49:37 2003
**      by: The User Interface Compiler ($Id: config_erasing.h,v 1.1 2003/06/25 21:56:47 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef CONFIG_ERASING_H
#define CONFIG_ERASING_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QButtonGroup;
class QCheckBox;
class QGroupBox;
class QLabel;
class QLineEdit;
class QRadioButton;
class QSpinBox;

class Config_Erasing : public QWidget
{
    Q_OBJECT

public:
    Config_Erasing( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~Config_Erasing();

    QGroupBox* GroupBox_erasing;
    QGroupBox* GroupBox_general;
    QSpinBox* SpinBox_overwriting;
    QLabel* TextLabel1;
    QCheckBox* CheckBox_only_erase;
    QCheckBox* CheckBox_erase_filenames;
    QButtonGroup* ButtonGroup_pattern;
    QRadioButton* CheckBox_use_pattern;
    QRadioButton* CheckBox_random_overwriting;
    QLineEdit* patternedit;

protected:
    QGridLayout* Config_ErasingLayout;
    QGridLayout* GroupBox_erasingLayout;
    QGridLayout* GroupBox_generalLayout;
    QGridLayout* ButtonGroup_patternLayout;

protected slots:
    virtual void languageChange();
};

#endif // CONFIG_ERASING_H
