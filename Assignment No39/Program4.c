#include<stdio.h>

int Min(int iNo)
{
     
 
    static int iDigit = 0;
     
         static int iMin = 0 ;

     
     if(iNo > 0)
     {    
         iDigit = iNo % 10;
         iNo = iNo / 10;
         
         Min(iNo);
        
     }
       if(iDigit < iMin)
         {
             iMin = iDigit;
         }    
     return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("%d",iRet);

    return 0;
}