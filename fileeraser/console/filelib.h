//filelib.h

#ifndef filelib_H
#define filelib_H

#include <sys/types.h>
#include <sys/stat.h>

template<class name> long flen(name filename)
{
struct stat filestat;
int r = stat(filename,&filestat);
if(r == 0)
{
return filestat.st_size;
}
else
{
return -1;
}
}

template<class name,class str> void freadstr(name filename,str string)
{
long length = 0;
length = flen(filename);
FILE* stream;
if(length != -1)
{
if(!((stream = fopen(filename,"r")) == NULL))
{
fread(string,sizeof(char),length,stream);
fclose(stream);
}
string[length]='\0';
}
}

template<class name,class str> void fwritestr(name filename,str string)
{
long length = 0;
length = strlen(string);
FILE* stream;
if(!((stream = fopen(filename,"w")) == NULL))
{
fwrite(string,sizeof(char),length,stream);
fclose(stream);
}
}

template<class name,class str> void fwritestra(name filename,str string)
{
long length = 0;
length = strlen(string);
FILE* stream;
if(!((stream = fopen(filename,"a")) == NULL))
{
fwrite(string,sizeof(char),length,stream);
fclose(stream);
}
}

template<class name,class str> void fwritebstra(name filename,str string)
{
long length = 0;
length = strlen(string);
FILE* stream;
if(!((stream = fopen(filename,"ab")) == NULL))
{
fwrite(string,sizeof(char),length,stream);
fclose(stream);
}
}

template<class name> void fwo(name filename)
{
char wash[1];
fwritestr(filename,wash);
}

template<class name,class str> void fwritestrb(name filename,str string)
{
long length = 0;
length = flen(filename);
long slength = 0;
slength = strlen(string);
FILE* stream;
if(length != -1)
{
char old[length];
freadstr(filename,old);
fwo(filename);
if(!((stream = fopen(filename,"a")) == NULL))
{
fwrite(string,sizeof(char),slength,stream);
fwrite(old,sizeof(char),length,stream);
fclose(stream);
}
}
else
{
if(!((stream = fopen(filename,"w")) == NULL))
{
fwrite(string,sizeof(char),slength,stream);
fclose(stream);
}
}
}

template<class name> long fexist(name filename)



{
FILE* stream;
if(!((stream = fopen(filename,"r")) == NULL))
{
fclose(stream);
return 1;
}
else
{
return -1;
}
}

template<class name,class erg> void fexist(name filename,erg &exist)
{
FILE* stream;
if(!((stream = fopen(filename,"r")) == NULL))
{
fclose(stream);
exist = 1;
}
else
{
exist = -1;
}
}

template<class name> long fcreate(name filename)
{
long ex=0;
ex = fexist(filename);
FILE* stream;
if(ex == -1)
{
if(!((stream=fopen(filename,"w"))==NULL))
{
fclose(stream);

return 1;
}
else
{
return -1;
}
}
else
{
return -1;
}
}

#endif //filelib_H
