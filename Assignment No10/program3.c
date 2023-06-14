/*
Accept N numbers from user and accept one another number as No,
return index of Last occurance of that No.


  Input :   N :       6
            No :      66
  Elements: 85  66  3  66  93  88
  Output :  3

  Input :   N :       6
            No :      93
            Elements: 85  66  3  66  93  88
  Output :  4

  Input :   N :       6
            No :      12
  Elements: 85  11  3  15  11  111
  Output :  -1
*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength-1; iCnt>=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
        
        if(iCnt == iLength)
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
   
}
int main()
{
    int iSize = 0, iRet = 0, iValue = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter number:\n");
    scanf("%d",&iValue);
 
    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter number: %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = FirstOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurance of number is %d",iRet);
    }

    free(p);

    return 0;
}
