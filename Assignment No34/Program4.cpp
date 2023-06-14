#include<iostream>
using namespace std;

template <class T>
T Max(T *Arr,int iSize)
{
    int i = 0;
    T Max = Arr[i];

    for(i = 0; i < iSize; i++)
    {
        if(Max < Arr[i])
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int iRet = Max(arr,5);
    printf("%d\n",iRet);
    
    float brr[] = {10.0,3.7,9.8,8.7};
    float fRet = Max(brr,4);
    printf("%f",fRet);

    return 0;
}