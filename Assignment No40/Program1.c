#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Fname[20];
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

    close(fd);

    return 0;
}