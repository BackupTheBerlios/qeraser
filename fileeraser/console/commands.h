/***************************************************************************
                          commands.h  -  description
                             -------------------
    begin                : Son Nov 10 2002
    copyright            : (C) 2002 by Tobias Gl‰ﬂer
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

#ifndef commands_H
#define commands_H

#include <unistd.h>

//OPTIONS

//don't print any output - command: -d
bool no_output = false;
//erase the files, but don't delete them - command: -e
bool only_erase = false;
//overwrite every byte with a random value - command: -r
bool random_overwriting = false;
//use a pattern for the overwriting - command: -p PATTERN
bool use_pattern = false;
//erase the filenames - command: -n (deactivates this option)
bool erase_filenames = true;
//times to overwrite a file - command: -m NUMBER
int multiple_overwrites = 1;
//if use_pattern is true, this pattern will be used - command: -p PATTERN
char* overwrite_pattern = NULL;
//contains filenames for erasing - command: -f FILE -f FILE -f FILE ...
char** filenames = NULL;


//the number of files for erasing
int filenamescnt = 0;


//check if options disturb each other
void check_options()
{
 if(random_overwriting == true &&
    use_pattern == true)
 {
 perror( "You can't use the options -r and -p together.\n" );
 abort();
 }
}

void parse_cmds(int argc, char* argv[])
{
filenames = (char**) malloc((argc)*sizeof(char*));
char ch;                   /* to hold command line option */

  /*
   * the option string will be passed to getopt(3), the format
   * of our string "dernm:p:f:" will allow us to accept -d as a flag,
   * and -m or -f with an argument, the colon suffix tells getopt(3)
   * that we're expecting an argument.  Eg:  feraser -d -f FILE -m3
   *
   */
  char *optstr = "dernhm:p:f:";

  /*
   * getopt(3) takes our argc, and argv, it also takes
   * the option string we set up earlier.  It will assign
   * the switch character to ch, and -1 when there are no more
   * command line options to parse.
   *
   */
  while( -1 != (ch=getopt(argc,argv,optstr))) {
    switch(ch) {
      case 'd':           /* this is just the flag -d -- no argument expected */
        no_output = true;
        break;

      case 'e':           /* this is just the flag -e -- no argument expected */
        only_erase = true;
        break;

      case 'r':           /* this is just the flag -r -- no argument expected */
        random_overwriting = true;
        break;

      case 'n':           /* this is just the flag -n -- no argument expected */
        erase_filenames = false;
        break;

      case 'h':           /* this is just the flag -n -- no argument expected */
        printf("Usage");
        break;

      /*
       * for -m, -p and -f we expect an argument, which getopt(3)
       * will store in the buffer optarg
       *
       */

      case 'm':
        sscanf(optarg,"%d",&multiple_overwrites);
        break;

      case 'p':
        overwrite_pattern = (char*) malloc(strlen(optarg)+1);
        overwrite_pattern = optarg;
        use_pattern = true;
        break;

      case 'f':
        filenames[filenamescnt] = (char*) malloc(strlen(optarg)+1);
        filenames[filenamescnt] = optarg;
        filenamescnt++;
        break;

      /*
       * getopt(3) will return the questionmark character if
       * it encounters a command line option which isn't listed
       * in our option string ("dernm:p:f:"), and store the switch
       * in the int optopt
       *
       */
      case '?':
        printf("unrecognized option: %c\n",optopt);
        break;

      /*
       * this default case is just be being thorough, unless
       * it's inappropriate, I use the default case to help
       * expose unexpected conditions.
       *
       */
      default:
        printf("error?  condition unaccounted for?\n");
        break;
    }
  }
check_options();
}

#endif //commands_H
