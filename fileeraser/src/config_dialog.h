/****************************************************************************
** Form interface generated from reading ui file 'config_dialog.ui'
**
** Created: Sam Mai 3 12:49:37 2003
**      by: The User Interface Compiler ($Id: config_dialog.h,v 1.1 2003/06/25 21:56:53 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef CONFIG_DIALOG_H
#define CONFIG_DIALOG_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class Config_Frame;
class QListView;
class QListViewItem;
class QPushButton;

class Config_Dialog : public QDialog
{
    Q_OBJECT

public:
    Config_Dialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~Config_Dialog();

    QPushButton* buttonHelp;
    QPushButton* buttonApply;
    QPushButton* buttonOk;
    QPushButton* buttonCancel;
    QListView* configoverview;
    Config_Frame* ConfigFrame;

protected:
    QGridLayout* Config_DialogLayout;
    QHBoxLayout* Layout1;

protected slots:
    virtual void languageChange();
private:
    QPixmap image0;
    QPixmap image1;

};

#endif // CONFIG_DIALOG_H
