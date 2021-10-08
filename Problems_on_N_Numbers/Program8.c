/*
3. Accept N numbers from user check whether that numbers contains 11 in 
it or not. 
Input : N : 6 
 Elements : 85 66 11 80 93 88 
Output : 11 is present 
Input : N : 6 
 Elements : 85 66 3 80 93 88 
Output : 11 is absent
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int *Arr,int iSize)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==11)
        {
            break;
        }
    }
    if(i==iSize)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    int iLength=0,i=0;
    BOOL bRet=FALSE;

    int *p=NULL;

    printf("Enter the number of Elements:\n");
    scanf("%d",&iLength);

    p=(int*)malloc(iLength*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the Elements :\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&p[i]);
    }

    bRet=Check(p,iLength);
    if(bRet==TRUE)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is Absent\n");
    }
    free(p);
    return 0;
}
