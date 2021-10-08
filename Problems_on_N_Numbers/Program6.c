/*
1. Accept N numbers from user and return frequency of even numbers. 
Input : N : 6 
 Elements : 85 66 3 80 93 88 
Output : 3 
*/

#include<stdio.h>
#include<stdlib.h>

int CountEvent(int *arr,int iSize)
{
    int i=0,iCnt=0;
    for(i=0;i<iSize;i++)
    {
        if(arr[i]%2==0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int *p=NULL;
    int iLength=0,i=0,iRet=0;

    printf("Enter the Length of Array :\n");
    scanf("%d",&iLength);

    p=(int*)malloc(iLength*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate the Memory\n");
        return -1;
    }

    printf("Enter the elements :\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&p[i]);
    }
    iRet=CountEvent(p,iLength);
    printf("Even Count :%d",iRet);
    free(p);

    return 0;
}
