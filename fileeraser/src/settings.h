/***************************************************************************
                          settings.h  -  description
                             -------------------
    begin                : Sam M‰r 15 2003
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

#ifndef SETTINGS_H
#define SETTINGS_H

extern "C" {
#include "../config_api/config_api.h"
}

//config_api
extern config_t conf;
extern char temp_config_value[MAX_LINE_SIZE];

//global variables
extern string homedir;
extern string configfile;

struct config_struct
{
int multiple_overwrites;
bool only_erase;
bool random_overwriting;
string pattern;
};

extern config_struct fileeraser_config;

void get_config(config_struct& config);
void set_config(config_struct& config);

#endif //SETTINGS_H
