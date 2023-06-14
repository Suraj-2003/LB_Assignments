#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter file name that you want to create\n");
    scanf("%s",Fname);

    fd = creat(Fname, 0777);
    if(fd == -1)
    {
        printf("Unable to create file");
        return -1;
    }

    printf("File created successfully\n");

    return 0;
}