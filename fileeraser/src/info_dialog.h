/****************************************************************************
** Form interface generated from reading ui file 'info_dialog.ui'
**
** Created: Sam Mai 3 12:49:37 2003
**      by: The User Interface Compiler ($Id: info_dialog.h,v 1.1 2003/06/25 21:56:53 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef INFO_DIALOG_H
#define INFO_DIALOG_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QGroupBox;
class QLabel;
class QPushButton;
class QTextBrowser;

class Info_Dialog : public QDialog
{
    Q_OBJECT

public:
    Info_Dialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~Info_Dialog();

    QLabel* NebitLogo;
    QGroupBox* contactinfo;
    QLabel* contactlabel2;
    QLabel* contactlabel;
    QLabel* programversioncopyright;
    QGroupBox* GPLBox;
    QTextBrowser* GPLbrowser;
    QGroupBox* creditsBox;
    QTextBrowser* creditsbrowser;
    QPushButton* close_button;

protected:
    QGridLayout* Info_DialogLayout;
    QGridLayout* GPLBoxLayout;
    QGridLayout* creditsBoxLayout;

protected slots:
    virtual void languageChange();
private:
    QPixmap image0;
    QPixmap image1;

};

#endif // INFO_DIALOG_H
