  /***************************************************************************
                          sysmanage.h  -  description
                             -------------------
    begin                : Sat Apr 20 2002
    copyright            : (C) 2002 by Tobias Gl‰ﬂer
    email                : tobi.web@gmx.de
 ***************************************************************************/

//This header-file is created that programs can find out where their
//data and configuration-files are stored in a crossplattform way.(Unix,Win)


template<class T> void getProgramName(T parg,T pname)
{
int cnt = strlen(parg);
int tbreak = 0;
while(cnt >= 0)
{
if(parg[cnt] == '/' || parg[cnt] == '\\')
{
tbreak = cnt + 1;
break;
}
cnt--;
}
cnt = 0;
while(parg[tbreak + cnt] !=  '\0')
{
pname[cnt] = parg[tbreak + cnt];
cnt++;
}
pname[cnt] = '\0';
}

//returns 0 - if the system could not be detected
//returns 1 - if unix was detected
//returns 2 - if windows was detected
template<class T> int getSystem(T pname)
{
char sysdependentPath[10] = "/usr/lib/";
if(fopen(sysdependentPath,"r") != NULL)
{
return 1;
}
char *windir;
windir = getenv( "WINDIR" );
if(windir != NULL)
{
return 2;
}
return 0;
}

template<class T> void getProgramDir(T pname,T pdir)
{
int sys = getSystem(pname);
if(sys != 0)
{
pdir[0] = '\0';
	if(sys == 1)
	{
	strcat(pdir,"/usr/lib/");
	strcat(pdir,pname);
	strcat(pdir,"/");
	if(fopen(pdir,"r") == NULL)
	{
	pdir[0] = '\0';
	}
	}
	if(sys == 2)

	{
	char *windir;
	windir = getenv( "WINDIR" );
	char plidfile[200];
	strcpy(plidfile,windir);
	strcat(plidfile,"\\plid\\");
	strcat(plidfile,pname);
	FILE *stream;
	if((stream = fopen(plidfile,"r")) != NULL)
	{
	int cnt = 0;
	while(!feof(stream))
	{
		fread(&pdir[cnt],sizeof(char),1,stream);
		cnt++;
	}
	pdir[--cnt] = '\0';
		fclose(stream);
	}
	}
}
else
{
pdir[0] = '\0';
}
}


//windows only
template<class T> int setProgramDir(T pname,T plid,T pdir)
{
char plidfile[150];
plidfile[0] = '\0';
strcat(plidfile,plid);
strcat(plidfile,"\\");
strcat(plidfile,pname);
if(pdir[strlen(pdir)] != '\\' && pdir[strlen(pdir)] != '/')
{
	strcat(pdir,"\\");
}
FILE *stream;
if((stream = fopen(plidfile,"w")) != NULL)
{     
	fwrite(pdir,sizeof(char),strlen(pdir),stream);
	fclose(stream);
	return 1;
}
else
{
	return 2;
}
	return 0;
}