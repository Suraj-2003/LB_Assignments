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

void Display(PNODE Head)
{
    printf("Data from Linked List\n");

    while(Head!=NULL)
    {
        printf("[%d]->",Head->Data);
        Head = Head->Next;
    }
    printf("\n");
}

int AdditionEven(PNODE Head)
{
    int iNo = 0;
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt<=6; iCnt++)
    {
        iNo = Head -> Data;
        
        if((iNo % 2) == 0)
        {
            iSum = iSum + iNo;
        }
        Head = Head -> Next;
    } 
    return iSum;

}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
   
    iRet = AdditionEven(First);
    printf("Addition is: %d\n",iRet);

    
    return 0;
}