/*
   Write a program which accept number from user and
   display its factors in decresing order.

   Input :  10
   Output:  1  2  5

   Input :  12
   Output : 6  4  3  2  1
*/
#include<stdio.h>
 
void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo-1; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}