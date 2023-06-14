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

void DisplayPerfect(PNODE Head)
{
    int iCnt = 0;
    int iNo = 0;
    int iCount = 0;
    

    for(iCount = 1; iCount<=6; iCount++)
    {
        int iSum = 0;   
        iNo = Head -> Data;
        
        for(iCnt = (iNo/2); ((iCnt >= 1) && (iSum <= iNo)); iCnt--)
        {
             if((iNo % iCnt) == 0)
             {
                 iSum =  iSum + iCnt;
             }
        }

        if(iSum == iNo)
        {
           printf("%d\t",iNo);
        }

        Head = Head -> Next;
         
    } 

}

int main()
{
    PNODE first = NULL;
    
    InsertFirst(&first,89);
    InsertFirst(&first,6);
    InsertFirst(&first,41);
    InsertFirst(&first,17);
    InsertFirst(&first,28);
    InsertFirst(&first,11);
    
    DisplayPerfect(first);
    
    return 0;
}