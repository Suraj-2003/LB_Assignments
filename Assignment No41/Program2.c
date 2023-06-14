#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

#define FILESIZE 1024

int CountSmall(char FName[])
{
    char Data[FILESIZE];
    int fd = 0, iRet = 0, i = 0, iCnt = 0;

    fd = open(FName,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    while((iRet = read(fd,Data,FILESIZE)) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if((Data[i] >= 'a') && (Data[i] <= 'z'))
            {
                iCnt++;
            }
        }
    }
    close(fd);
    return iCnt;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter fie name\n");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of small charecters are %d",iRet);

    return 0;
}