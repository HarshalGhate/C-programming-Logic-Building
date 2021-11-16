#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(*Head==NULL) //Linked List Empty
    {
        *Head=newn;
    }
    else            //LL have atleast one node
    {
        newn->next=*Head;
        (*Head)->prev=newn;
        *Head=newn;
    }

}
void InsertLast(PPNODE Head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(*Head==NULL) //Linked List Empty
    {
        *Head=newn;
    }
    else            //LL have atleast one node
    {
        PNODE temp=*Head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;
    }
}
void DeleteFirst(PPNODE Head)
{
    if(*Head==NULL) //LL empty
    {
        return;
    }
    if((*Head)->next==NULL) // LL have One node
    {
        free(*Head);
        *Head=NULL;
    }
    else    //LL have more nodes
    {
        *Head=(*Head)->next;
        free((*Head)->prev);
        (*Head)->prev=NULL;
    }   
}
void DeleteLast(PPNODE Head)
{
    if(*Head==NULL) //LL empty
    {
        return;
    }
    if((*Head)->next==NULL) // LL have One node
    {
        free(*Head);
        *Head=NULL;
    }
    else    //LL have more nodes
    {
        PNODE temp=*Head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }   
}
void Display(PNODE Head)
{
    while (Head!=NULL)
    {
        printf("|%d|=>",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
    
}
int Count(PNODE Head)
{
    int iCnt=0;
    while(Head!=NULL)
    {
        iCnt++;
        Head=Head->next;
    }
    return iCnt;
}
bool Search(PNODE Head,int no)
{
    int iSize=0;
    iSize=Count(Head);
    while(Head!=NULL)
    {
        if(Head->data==no)
        {
            break;
        }
        Head=Head->next;
    }
    if(Head==NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}
void InsertAtPos(PPNODE Head,int ipos,int no)
{
    int i=0;
    int iSize=Count(*Head);
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;
    if((ipos<1)||(ipos>iSize+1))           
    {
        return;
    }
    if(ipos==1)
    {
        InsertFirst(Head,no);
    }
    else if(ipos==iSize+1)
    {
        InsertLast(Head,no);
    }
    else                            //Insert In Between
    {
        PNODE temp=*Head;
        for(i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;
    }
    
}
void DeleteAtPos(PPNODE Head,int ipos)
{
    int iSize=Count(*Head);
    if((ipos<1)||(ipos>iSize))
    {
        return;
    }
    if(ipos==1)
    {
        DeleteFirst(Head);
    }
    else if(ipos==iSize)
    {
        DeleteLast(Head);
    }
    else                                //Delete In between
    {
        PNODE temp=*Head;
        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    }
}
int main()
{
    PNODE First=NULL;
    int iOption=1,iNo=0,iPos=0,iRet=0;
     bool bRet=false;

    while(iOption!=0)
    {
        printf("--------------------------------------------------\n");
        printf("1 : Insert First\n");
        printf("2 : Insert Last\n");
        printf("3 : Insert At Pos\n");
        printf("4 : Delete First\n");
        printf("5 : Delete Last\n");
        printf("6 : Delete At Pos\n");
        printf("7 : Display\n");
        printf("8 : Count\n");
        printf("9 : Serach\n");
        printf("0 : Exit\n");
        printf("--------------------------------------------------\n");
        printf("Enter your Choice :\n");
        scanf("%d",&iOption);

        switch(iOption)
        {
            case 1:
                    printf("Enter the data to insert :\n");
                    scanf("%d",&iNo);
                    InsertFirst(&First,iNo);
                    break;
            case 2:
                    printf("Enter the data to insert :\n");
                    scanf("%d",&iNo);
                    InsertLast(&First,iNo);
                    break;
           case 3:
                    printf("Enter pos:\n");
                    scanf("%d",&iPos);
                    printf("Enter the data to insert :\n");
                    scanf("%d",&iNo);
                    InsertAtPos(&First,iPos,iNo);
                    break;
            case 4:
                    DeleteFirst(&First);
                    break;
            case 5:
                    DeleteLast(&First);
                    break;
            case 6:
                    printf("Enter Pos :\n");
                    scanf("%d",&iPos);
                    DeleteAtPos(&First,iPos);
                    break;
            case 7:
                    Display(First);
                    break;
            case 8:
                    iRet=Count(First);
                    printf("Number of Nodes :%d\n",iRet);
                    break;
            case 9:
                   
                    printf("Enter the number to search :\n");
                    scanf("%d",&iNo);
                    bRet=Search(First,iNo);
                    if(bRet==true)
                    {
                        printf("Data Found Successfully !!!\n");
                    }
                    else
                    {
                        printf("Data Not Found !!!\n");
                    }
                    break;        
            case 0:
                    printf("Thank You For using for this Application\n");
                    break;

            default:
                    printf("Please select Valid Option !!!\n");
                    break;                

        }
    }


    return 0;
}