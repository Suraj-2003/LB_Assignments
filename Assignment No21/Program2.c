#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
     struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn  = (PNODE)malloc(sizeof(NODE));

    newn -> Next= NULL;
    newn -> Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    } 
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
}

void DiplayPallindrome(PNODE Head)
{
    int iNo = 0;
    int iCnt = 0;
    int iRev = 0;
    int iDigit = 0;

    for(iCnt = 1; iCnt<=6; iCnt++)
    {
        int iRev = 0;
        iNo = Head -> Data;
        int iTemp = iNo;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
   
             iRev = iRev * 10 + iDigit;

             iNo = iNo / 10;
        }

        Head = Head -> Next;
        if(iTemp == iRev)
        {
           printf("%d\t",iRev);
        }
    } 
}

int main()
{
    PNODE first = NULL;
    

    InsertFirst(&first,89);
    InsertFirst(&first,6);
    InsertFirst(&first,414);
    InsertFirst(&first,17);
    InsertFirst(&first,28);
    InsertFirst(&first,11);
    
    DiplayPallindrome(first);
    
    return 0;
}