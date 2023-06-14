#include<stdio.h>

void Display()
{
   static int iCnt = 0;

   if(iCnt < 5)
   {
       printf("%d\t",iCnt);
       iCnt++;
       Display();
   }
}

int main()
{
    Display();

    return 0;
}