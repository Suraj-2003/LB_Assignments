#include<iostream>
using namespace std;

template <class T>
int SearchFirst(T *Arr, int iSize, T no)
{
    int i = 0;
    
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == no)
        {
            break;
            
        }
    }
    if(i == iSize)
    {
       return -1;
    }
    else
    {
        return i+1;
    }
}
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    cout<<iRet;

    return 0;
}