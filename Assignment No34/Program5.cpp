#include<iostream>
using namespace std;

template <class T>
T Min(T *Arr,int iSize)
{
    int i = 0;
    T Min = Arr[i];

    for(i = 0; i < iSize; i++)
    {
        if(Min > Arr[i])
        {
            Min = Arr[i];
        }
    }
    return Min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int iRet = Min(arr,5);
    printf("%d\n",iRet);
    
    float brr[] = {10.0,3.7,9.8,8.7};
    float fRet = Min(brr,4);
    printf("%f",fRet);

    return 0;
}