#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
    str++;    
    }

     if(*str == ch)
     {
         return TRUE;
     }    
     else
     {
         return FALSE;
     }


}
int main()
{
    char arr[20];
    char cValue;
    BOOL bRet;

    
    printf("Enter string\n");
    scanf(" %[^'\n']s",arr);
    
    printf("Enter charecter\n");
    scanf(" %c",&cValue);
    
    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Charecter found");
    }
    else
    {
        printf("Charecter not found");
    }
    
    return 0;
}