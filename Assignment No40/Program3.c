#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

#define FILESIZE 1024

int main()
{
    char Fname[20];
    char Data[FILESIZE];
    int iRet = 0;
    int fd = 0;
 
    printf("Enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open");
        return -1;
    }

    printf("File opened successfully\n");
    
    while((iRet = read(fd,Data,FILESIZE)) != 0)
    {
        write(1,Data,iRet);
    }

    close(fd);

     return 0;
}