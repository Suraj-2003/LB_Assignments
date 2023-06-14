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

void DisplayLarge(PNODE Head)
{
    int iCnt = 0;
    int iDigit = 0;
    int iNo = 0;
    

    for(iCnt = 1; iCnt<=4; iCnt++)
    {
        
        iNo = Head -> Data;
       
        int iMax = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iMax < iDigit)
            {
                iMax = iDigit;
            }
            iNo = iNo / 10;
        }

        printf("%d\t",iMax);
        Head = Head -> Next;
         
    } 
}

int main()
{
    PNODE first = NULL;
    
    InsertFirst(&first,419);
    InsertFirst(&first,532);
    InsertFirst(&first,250);
    InsertFirst(&first,11);
    
    DisplayLarge(first);
    
    return 0;
}