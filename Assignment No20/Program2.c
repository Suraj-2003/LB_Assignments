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

void DisplayPrime(PNODE Head)
{
    int iNo = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt<=6; iCnt++)
    {
        iNo = Head -> Data;
        
        if((iNo % 2) != 0)
        {
            printf("%d\t",iNo);
        }
        Head = Head -> Next;
    } 
    

}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
   
    DisplayPrime(First);

    
    return 0;
}