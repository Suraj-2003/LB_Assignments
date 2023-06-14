#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

void Display(char FName[], int iSize)
{
    char Data[iSize];
    int fd = 0, iRet = 0;
    
    if(iSize < 0)
    {
        printf("Enter poistive Number");
        return;
    }
    
    fd = open(FName,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return;
    }
    
    iRet = read(fd,Data,iSize);

    if(iRet != iSize)
    {
        printf("Only %d bytes charecters contains in file\n",iRet);
        return;
    }

    write(1,Data,iSize);
    
    close(fd);
    
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter fie name\n");
    scanf("%s",FileName);

    printf("Enter thenumber of charecters\n");
    scanf("%d",&iValue);

    Display(FileName,iValue);

    return 0;
}