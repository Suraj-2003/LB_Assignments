#include<stdio.h>

int Mult(int iNo)
{
    static int iMul = 1;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        
        iMul = iMul * iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d",iRet);

    return 0;
}