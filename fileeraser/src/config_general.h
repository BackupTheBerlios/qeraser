/****************************************************************************
** Form interface generated from reading ui file 'config_general.ui'
**
** Created: Sam Mai 3 12:49:37 2003
**      by: The User Interface Compiler ($Id: config_general.h,v 1.1 2003/06/25 21:56:53 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef CONFIG_GENERAL_H
#define CONFIG_GENERAL_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QComboBox;
class QGroupBox;
class QLabel;
class QPushButton;

class Config_General : public QWidget
{
    Q_OBJECT

public:
    Config_General( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~Config_General();

    QGroupBox* GroupBox_general;
    QGroupBox* GroupBox_look;
    QLabel* TextLabel1;
    QPushButton* PushButton_background_colour;
    QGroupBox* GroupBox_lang;
    QComboBox* ComboBox_language;
    QLabel* label_selectlan;

public slots:
    virtual void selectColour();

protected:
    QGridLayout* Config_GeneralLayout;
    QGridLayout* GroupBox_generalLayout;
    QGridLayout* GroupBox_langLayout;

protected slots:
    virtual void languageChange();
};

#endif // CONFIG_GENERAL_H
