/****************************************************************************
** Form interface generated from reading ui file 'fileeraser.ui'
**
** Created: Sam Mai 3 12:49:37 2003
**      by: The User Interface Compiler ($Id: fileeraser.h,v 1.1 2003/06/25 21:56:47 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef FILEERASER_H
#define FILEERASER_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QComboBox;
class QLabel;
class QProgressBar;
class QPushButton;
class QTextEdit;

class fileeraser : public QWidget
{
    Q_OBJECT

public:
    fileeraser( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~fileeraser();

    QComboBox* mycombo;
    QPushButton* file_button;
    QLabel* mylabel;
    QPushButton* erase_button;
    QTextEdit* mymultiline;
    QPushButton* clear_button;
    QPushButton* remove_button;
    QProgressBar* file_erase_progress;
    QProgressBar* total_erase_progress;
    QPushButton* quit_button;
    QPushButton* config_button;
    QPushButton* info_button;
    QPushButton* manual_button;

public slots:
    virtual void browse_files();
    virtual void clear_list();
    virtual void fit_droping();
    virtual void remove_item();
    virtual void handle_file_erasing();

protected:
    QGridLayout* FileEraserLayout;
    QGridLayout* Layout1;
    QVBoxLayout* Layout2;
    QGridLayout* Layout4;
    QGridLayout* Layout3;

protected slots:
    virtual void languageChange();
private:
    QPixmap image0;

};

#endif // FILEERASER_H
