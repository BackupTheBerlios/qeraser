#ifndef CONFIG_FRAME_H
#define CONFIG_FRAME_H

#include <qtooltip.h> 
#include <qwidget.h> 
#include <qlineedit.h> 
#include <qmultilineedit.h> 
#include <qpushbutton.h> 
#include <qlabel.h> 
#include <qfiledialog.h>
#include <qcombobox.h>
#include <qthread.h>
#include <qtextbrowser.h>
#include <qevent.h>
#include <qtextstream.h>
#include <qregexp.h> 
#include <qwidgetstack.h>
#include <qlayout.h>
#include <qlistview.h>
#include <stdlib.h>
#include <stdio.h> 
#include <errno.h>
#include <iostream>
#include "config_general.h"
#include "config_erasing.h"

class QListViewItem;

class Config_Frame : public QWidget
{

Q_OBJECT

public:
    Config_Frame( QWidget *parent=0, const char *name=0);

public slots:
	void changePage(QListViewItem* page);

private:
	QGridLayout* Config_FrameLayout;
	Config_General* config_general;
	Config_Erasing* config_erasing;
	QWidgetStack* framestack;
};

#endif // CONFIG_FRAME_H
