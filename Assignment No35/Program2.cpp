#include<iostream>
using namespace std;

template <class T>
T Frequency(T *arr, int iSize, T iNo)
{
    int i = 0;
    int Freq = 0;

    for(i = 0; i <= iSize; i++)
    {
           if(arr[i] == iNo)
           {
               Freq++;
           }
    }
    return Freq;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,40);
    cout<<iRet<<endl;
    
    float brr[] = {10.1f,20.2f,30.3f,10.1f,30.3f,40.4f,10.1f,40.4f,10.1f};
    int fRet = Frequency(brr,9,10.1f);
    printf("%d",fRet);

    return 0;
}