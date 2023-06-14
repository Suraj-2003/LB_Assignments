#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        
        if(*str == ch)
        {
            iCnt++;
        }
    str++;    
    }
   
   return iCnt;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    printf("Enter charecter\n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);
    printf("Charecter frequency is: %d\n",iRet);
    
    return 0;
}