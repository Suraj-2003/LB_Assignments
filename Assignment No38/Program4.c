#include<stdio.h>

int Fact(int iNo)
{
     static int iMul = 1;

     if(iNo > 0)
     {
         iMul = iMul * iNo;
         iNo--;
         Fact(iNo);
     }
     return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);
    printf("%d",iRet);

    return 0;
}