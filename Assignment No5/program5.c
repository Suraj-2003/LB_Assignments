/*
  Write a program which accept number from user 
  and return difference between summetion of all its factors and non factors
  
  Input :   12
  Output :  -34    (16 - 50)

  Input :   10
  Output :  -29    (8 - 37)
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;
    int Diff = 0;
    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
        
    
    }
    Diff = iFactSum - iNonFactSum;
     
     return Diff;
     
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}