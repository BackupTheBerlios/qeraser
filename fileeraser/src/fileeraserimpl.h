/***************************************************************************
                          fileeraserimpl.h  -  description
                             -------------------
    begin                : Fre Jan 17 2003
    copyright            : (C) 2003 by Tobias Gl‰ﬂer
    email                : tobi.web@gmx.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef fileeraserIMPL_H
#define fileeraserIMPL_H

using namespace std;

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
#include <qprogressbar.h>
#include <qprocess.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <iostream>
#include <string>
#include "info_dialog.h"
#include "manual_dialogimpl.h"
#include "config_frame.h"
#include "config_dialog.h"
#include "fileeraser.h"
#include "settings.h"

#if defined(QT_NO_THREAD)
#  error Thread support not enabled.
#endif

class fileeraserImpl : public fileeraser, public QThread
{
  Q_OBJECT

public:
    fileeraserImpl( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
	  Info_Dialog* info_dialog;
	  Manual_DialogImpl* manual_dialog;
	  Config_Dialog* config_dialog;
    virtual void run();

public slots:
	virtual void handle_file_erasing();
	virtual void browse_files();
	virtual void clear_list();
	virtual void remove_item();
	virtual void fit_droping();

private:
  bool stop;
	QFileDialog* myfd;
  int firstfile;
  int filecnt;
  char** filenames;
};

#endif //fileeraserIMPL_H
