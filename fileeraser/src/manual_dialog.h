/****************************************************************************
** Form interface generated from reading ui file 'manual_dialog.ui'
**
** Created: Sam Mai 3 12:49:37 2003
**      by: The User Interface Compiler ($Id: manual_dialog.h,v 1.1 2003/06/25 21:56:54 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef MANUAL_DIALOG_H
#define MANUAL_DIALOG_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qdialog.h>
#include <qdir.h>
#include <qpaintdevice.h>
#include <qpaintdevicemetrics.h>
#include <qpainter.h>
#include <qprinter.h>
#include <qsimplerichtext.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QPushButton;
class QTextBrowser;
class QToolButton;

class Manual_Dialog : public QDialog
{
    Q_OBJECT

public:
    Manual_Dialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~Manual_Dialog();

    QToolButton* content_button;
    QTextBrowser* manualbrowser;
    QToolButton* print_button;
    QToolButton* backward_button;
    QPushButton* close_button;
    QToolButton* forward_button;

public slots:
    virtual void print();

protected:
    QGridLayout* Manual_DialogLayout;

protected slots:
    virtual void languageChange();
private:
    QPixmap image0;
    QPixmap image1;
    QPixmap image2;
    QPixmap image3;
    QPixmap image4;

};

#endif // MANUAL_DIALOG_H
