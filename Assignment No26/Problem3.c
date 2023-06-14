#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int i = 0;
    while(*str != '\0')
    {
        i++;
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str=='\0')
    {
        return -1;
    }
    else
    {
        return i;
    }
}

int main()
{
    char arr[20];
    char cValue;
    int iRet;
    
    printf("Enter string\n");
    scanf(" %[^'\n']s",arr);
    
    printf("Enter charecter\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);
    printf("Charecter location is: %d\n",iRet);
    
    return 0;
}