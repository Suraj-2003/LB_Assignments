#include<stdio.h>

void Display()
{
   static int i = 0;

   if(i < 6 )
   {
      printf("%c\t",i+'A');
      i++;
      Display();
   }
}

int main()
{
    Display();

    return 0;
}