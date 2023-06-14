#include<stdio.h>

int LastChar(char str[], char ch)
{
    
    
}

void Display(char *str)
{
    if(*str != '\0')
    {
        Display(str+1); // Head Recurssion
        printf("%c\n",*str);
    }
}

int main()
{
    char arr[20];
    char cValue;

    int iRet;
    
    
    printf("Enter charecter\n");
    scanf("%c",&cValue);

    printf("Enter string\n");
    scanf(" %[^'\n']s",arr);

    iRet = LastChar(arr,cValue);
    printf("Charecter location is: %d\n",iRet);
    
    return 0;
}