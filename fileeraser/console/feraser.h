//feraser.h

#ifndef feraser_H
#define feraser_H

//erases files with rub
template<class name,class rubber> void fcontent_erase(name filename,rubber rub)
{
long length = flen(filename);
long rublen = strlen(rub);
FILE* stream;
if(length != -1)
{
  long pos = 0;
  if(!((stream = fopen(filename,"wb")) == NULL))
  {
   while(pos+rublen < length)
   {
    fwrite(rub,sizeof(char),rublen,stream);
    pos += rublen;
   }
   fwrite(rub,sizeof(char),length-pos,stream);
   fclose(stream);
  }
 }
}

//erases files with random values
template<class name> void fcontent_erase(name filename)
{
long length = flen(filename);
FILE* stream;
if(length != -1)
{
  char rub[1];
  long pos = 0;
  if(!((stream = fopen(filename,"wb")) == NULL))
  {
   srand((unsigned int)time(NULL));
   while(pos < length)
   {
    rub[0] = rand();
    fwrite(rub,sizeof(char),1,stream);
    ++pos;
   }
   fclose(stream);
  }
 }
}

//erases filenames
template<class name> name fname_erase(name filename)
{
int length = strlen(filename);
char oldfilename[length];
strcpy(oldfilename,filename);
char* pos = strrchr(filename,'/');
int rigthlen;
if(pos != NULL)
{
rigthlen = (&filename[length] - pos)-1;
memset(pos+1,'-', rigthlen );
}
else
{
rigthlen = length - 2;
strcpy(filename,"./");
memset(filename+2,'-', length );
filename[length+2] = '\0';
}
while(rename(oldfilename,filename) == -1)
{
srand((unsigned int)time(NULL));
char rub;
for(int cnt = 0; cnt < rigthlen; ++cnt)
{
rub = rand();

filename[length - rigthlen + cnt] = rub;
}
}
return filename;
}

#endif //feraser_H
