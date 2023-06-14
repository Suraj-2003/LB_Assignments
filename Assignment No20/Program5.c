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

int SumDigit(PNODE Head)
{
    int iNo = 0;
    int iCnt = 0;
    int iDigit = 0;

    for(iCnt = 1; iCnt<=5; iCnt++)
    {
        int iSum = 0;
        iNo = Head -> Data;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
   
             iSum = iSum + iDigit;

             iNo = iNo / 10;
        }

        Head = Head -> Next;

        printf("%d\t",iSum);

    } 

}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
   
    SumDigit(First);
    
    return 0;
}