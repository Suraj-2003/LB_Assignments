#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    for(int iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        cout<<arr[iCnt]<<"\t";
    }
}
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    for(int i = 0; i<9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
    Reverse(arr,9);
}