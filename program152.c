#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
  int fd = 0, iRet = 0;
  char Fname[30];
  char Data[7];

  printf("Enter file name\n");
  scanf("%s",Fname);

  fd = open(Fname,O_RDONLY);

  if(fd == -1)
  {
    printf("Unable to open the file\n");
      return -1;
  }
  else
  {
    printf("File succesfully opened with FD : %d\n",fd);
  }
  iRet = read(fd,Data,7);
  printf("%d bytes gets succsesfully read from the file\n",iRet);
  printf("Data from the file is : %s\n",Data);
  return 0;
}