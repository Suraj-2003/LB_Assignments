#include<iostream>
using namespace std;

template <class T>
T Max(T No1, T No2, T No3)
{
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if((No2 > No3) && (No2 > No1))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    
    int iRet = Max(50,11,21);
    cout<<"Maximum number is:"<<' '<<iRet<<endl;
    
    float fRet = Max(10.11,20.11,30.11);
    cout<<"Maximum number is:"<<' '<<fRet<<endl;

    return 0;
}