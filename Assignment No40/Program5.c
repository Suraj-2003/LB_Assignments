#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20];
    char Data[50];
    int fd = 0;
 
    printf("Enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open");
        return -1;
    }
    

    printf("Enter string\n");
    scanf("%s",Data);
    
    write(fd,Data,strlen(Data));

    close(fd);

    return 0;
}