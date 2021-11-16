#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;                                                                                  
    }
}
void InsertLast(PPNODE Head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        PNODE temp;
        temp=*Head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
}
void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("|%d|->",Head->data);
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

void DeleteFirst(PPNODE Head)
{
    if(*Head==NULL)
    {
        return;
    }
    if((*Head)->next==NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        PNODE temp=*Head;
        
        *Head=(*Head)->next;
        free(temp);
    }
}
void DeleteLast(PPNODE Head)
{
    if(*Head==NULL)
    {
        return;
    }
    if((*Head)->next==NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        PNODE temp=NULL;
        temp=*Head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
} 
void  InsertAtPos(PPNODE Head,int pos,int no)
{
    int iSize=0,i=0;
    PNODE newn=NULL;
    iSize=Count(*Head);
    if((pos<1)||(pos>iSize+1))
    {
        return;
    }
    if(pos==1)
    {
        InsertFirst(Head,no);
    }
    else if(pos==iSize+1)
    {
        InsertLast(Head,no);
    }
    else
    {
        PNODE temp=*Head;
        newn=(PNODE)malloc(sizeof(NODE));
        newn->next=NULL;
        newn->data=no;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
}  
void DeleteAtPos(PPNODE Head,int pos)
{
     int iSize=0,i=0;
    iSize=Count(*Head);
    if((pos<1)||(pos>iSize+1))
    {
        return;
    }
    if(pos==1)
    {
        DeleteFirst(Head);
    }
    else if(pos==iSize+1)
    {
        DeleteLast(Head);
    }
    else
    {
        PNODE temp=*Head;
        PNODE target=NULL;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        target=temp->next;
        temp->next=target->next;
        free(target);
    }
}

int main()
{
    PNODE First=NULL;
    int iOption=1,iNo=0,iPos=0,iRet=0;
    
    while(iOption!=0)
    {
        printf("_________________________________________________________\n");
        printf("1 : Insert First\n");
        printf("2 : Insert Last\n");
        printf("3 : Insert At Pos\n");
        printf("4 : Delete First\n");
        printf("5 : Delete Last\n");
        printf("6 : Delete At Pos\n");
        printf("7 : Display\n");
        printf("8 : Count\n");
        printf("0 : Exit\n");
        printf("___________________________________________________________\n");
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
                    printf("Enter the Pos :\n");
                    scanf("%d",&iPos);
                    printf("Enter the data :\n");
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
                    printf("Enter the Pos :\n");
                    scanf("%d",&iPos);
                    DeleteAtPos(&First,iPos);  
                    break;
            case 7:
                    Display(First);
                    break;
            case 8:
                    iRet=Count(First);
                    printf("Number of Nodes : %d\n",iRet);
                    break;
             case 0:
                    printf("Thanks For Using this Application\n");  
                    break;     

            default:
                    printf("Please Enter the valid Option !!!\n");
                    break;                                    
        }
    }

    return 0;
}
