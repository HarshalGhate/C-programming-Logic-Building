/*
1. Accept N numbers from user and return the largest number. 
Input : N : 6 
 Elements : 85 66 3 66 93 88 
Output : 93
*/
#include<stdio.h>
#include<stdlib.h>

int Maximum(int *arr,int iSize)
{
    int i=0,iMax=0;
    for(i=0;i<iSize;i++)
    {
        if(arr[i]>iMax)
        {
            iMax=arr[i];
        }
    }
    return iMax;
}

int main()
{
    int iLength=0,i=0;
    int *p=NULL;
    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    p=(int *)malloc(iLength*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter the elements:\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&p[i]);
    }
    int iRet=Maximum(p,iLength);
    printf("Largest element :%d",iRet);

    return 0;
}