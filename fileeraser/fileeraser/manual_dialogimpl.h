#ifndef MANUAL_DIALOGIMPL_H
#define MANUAL_DIALOGIMPL_H

#include "manual_dialog.h"

class Manual_DialogImpl : public Manual_Dialog
{
  Q_OBJECT

public:
    Manual_DialogImpl( QWidget* parent = 0, const char* name = 0,
                    bool modal = FALSE, WFlags f = 0 ) :
    Manual_Dialog( parent, name, modal, f ) {}

public slots:
    virtual void print();

};


#endif //MANUAL_DIALOGIMPL_H
