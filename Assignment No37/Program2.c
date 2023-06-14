#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 0;

    if(iCnt < iNo)
    {
        printf("%d\t",iCnt+1);
        iCnt++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}