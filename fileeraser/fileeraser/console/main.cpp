/***************************************************************************
                          main.cpp  -  description
                             -------------------
    begin                : Mon Feb 3 2003
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

//standard
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <errno.h>

//feraser
#include "filelib.h" //very bad implementation - had been a practice
#include "feraser.h"
#include "commands.h"


//main function
int main(int argc, char *argv[])
{
  //parse command line
  parse_cmds(argc,argv);

  //how many files should be erased/deleted?
  if(only_erase)
  {
    if(!no_output)
    printf( "Files to erase: %i\n\n", filenamescnt );
  }
  else
  {
    if(!no_output)
    printf( "Files to erase and delete: %i\n\n", filenamescnt );
  }

  int erasequota = 0;
  int delquota = 0;

  //main loop (for each file)
  for(int fncnt = 0; fncnt < filenamescnt; ++fncnt)
  {
    if(!no_output)
    printf( "%s\n", filenames[fncnt] );

    //check if the file exits and is writeable
    int checkmode = 0;
    if((checkmode = access(filenames[fncnt],F_OK)) != 0)
    {
      if(!no_output)
      perror( " - Could not erase" );
      continue;
    }
    if((checkmode = access(filenames[fncnt],W_OK)) != 0)
    {
      if(!no_output)
      perror( " - Could not erase" );
      continue;
    }

    //erase files
    if(random_overwriting)
    {
      for(int cnt=0;cnt < multiple_overwrites;++cnt)
      {
        fcontent_erase(filenames[fncnt]);
      }
    }
    else
    {
      if(overwrite_pattern == NULL)
      {
        overwrite_pattern = (char*) malloc(1);
        overwrite_pattern[0] = '-';
      }
      for(int cnt=0;cnt < multiple_overwrites;++cnt)
      {
        fcontent_erase(filenames[fncnt],overwrite_pattern);
      }
    }

    //erase filenames
    if(erase_filenames)
    {
      char* pos = strrchr(filenames[fncnt],'/');
      char filepath[strlen(filenames[fncnt]) + 2];
      if(pos != NULL)
      {
        int pathlen = (pos+1 - &filenames[fncnt][0]);
        strncpy(filepath,filenames[fncnt],pathlen);
        filepath[pathlen] = '\0';
      }
      else
      {
        strcpy(filepath,"./");
        filepath[2] = '\0';
      }

      //erase the filename, if the directory exits and is writeable
      if((checkmode = access("./",F_OK)) != 0)
      {
        if(!no_output)
        perror( " - Could not erase the filename" );
      }
      else if((checkmode = access("./",W_OK)) != 0)
      {
        if(!no_output)
        perror( " - Could not erase the filename" );
      }
      else
      {
        filenames[fncnt] = fname_erase(filenames[fncnt]);
      }

    }

    if(!no_output)
    printf( " - Erased\n" );
    ++erasequota;

    //delete the file
    if(!only_erase)
    {
      if(remove(filenames[fncnt]) != -1)
      {
        ++delquota;
        if(!no_output)
        printf( " - Deleted\n" );
      }
      else
      {
        if(!no_output)
        perror( " - Could not delete" );
      }
    }

  } //end of the main loop

  //how many files could be erased/deleted?
  if(only_erase)
  {
    if(!no_output)
    printf( "\nCould erase %i of %i files\n", erasequota, filenamescnt );
  }
  else
  {
    if(!no_output)
    printf( "\nCould erase %i of %i files", erasequota, filenamescnt );
    printf( "\nCould delete %i of %i files\n", delquota, filenamescnt );
  }

  return 0;
}
