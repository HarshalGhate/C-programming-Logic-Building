/*
2. Accept N numbers from user and return difference between frequency of 
even number and odd numbers. 
Input : N : 7 
 Elements : 85 66 3 80 93 88 90 
Output : 1 (4 -3) 
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int *arr,int iSize)
{
    int i=0,iCntEven=0,iCntOdd=0;
    for(i=0;i<iSize;i++)
    {
        if(arr[i]%2==0)
        {
            iCntEven++;
        }
        else
        {
            iCntOdd++;
        }
    }
    return iCntEven-iCntOdd;
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
    iRet=Frequency(p,iLength);
    if(iRet<0)
    {
        iRet=-iRet;
    }
    printf("Difference count EvenOdd :%d",iRet);
    free(p);

    return 0;
}
