#include<iostream>
using namespace std;

template <class T>
int SearchLast(T *Arr, int iSize, T iNo)
{
    int iCnt = 0;
    
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt+1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr,9,40);
    cout<<iRet<<endl;

    
    float brr[] = {10.1,20.2,30.3,40.4,40.4,50.5,30.3,60.6};
    int fRet = SearchLast(brr,8,60.6f);
    cout<<fRet<<endl;

    
    char crr[] = {'A','B','C','E','E','F','G','A'};
    int cRet = SearchLast(crr,8,'E');
    cout<<cRet;

    return 0;
}