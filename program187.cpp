#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

class MarvellousFile
{
  char Fname[30];
  int fd;

  MarvellousFile(char * Name)
  {
    strcpy(Fname,Name);
    fd = open(Fname,O_RDWR);
  }
  ~MaevellousFile()
  {
    close(fd);
  }
  void Display()
  {
    int iRet = 0;
    char Buffer[10];
    lseek(fd,0,0);
    while((iRet = read(fd,Buffer,10))!= 0)
    {
      write(1,Buffer,iRet);
    }
  }
  int CountCapital()
  {
    int iRet = 0;
    char Buffer[10];
    lseek(fd,0,0);
    while((iRet = read(fd,Buffer,10))!= 0)
    {
      for()
    }
  }
};

int main()
{
  


  return 0;
}