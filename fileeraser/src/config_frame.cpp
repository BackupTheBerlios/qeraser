#include "config_frame.h"

Config_Frame::Config_Frame( QWidget *parent, const char *name) : QWidget( parent, name )
{

Config_FrameLayout = new QGridLayout( this ); 
Config_FrameLayout->setSpacing( 6 );
Config_FrameLayout->setMargin( 2 );

framestack = new QWidgetStack(this);
Config_FrameLayout->addWidget( framestack, 0, 0 );
config_general = new Config_General(this);
framestack->addWidget(config_general,0);
config_erasing = new Config_Erasing(this);
framestack->addWidget(config_erasing,1);

framestack->raiseWidget(config_general);
}

void Config_Frame::changePage(QListViewItem* page)
{
if(page != NULL)
{
 if(page->text(0) == tr("General"))
 {
 framestack->raiseWidget(config_general);
 }
 if(page->text(0) == tr("Erasing"))
 {
 framestack->raiseWidget(config_erasing);
 }
}
}
