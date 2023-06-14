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

void DisplayProduct(PNODE Head)
{
    int iCnt = 0;
    int iDigit = 0;
    int iNo = 0;

    for(iCnt = 1; iCnt<=4; iCnt++)
    {
        int iMul = 1;
        iNo = Head -> Data;
         
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
             iMul = iMul * iDigit;
             iNo = iNo / 10;
        }

        printf("%d\t",iMul);
        Head = Head -> Next;
         
    } 
}

int main()
{
    PNODE first = NULL;
    
    InsertFirst(&first,41);
    InsertFirst(&first,32);
    InsertFirst(&first,20);
    InsertFirst(&first,11);
    
    DisplayProduct(first);
    
    return 0;
}