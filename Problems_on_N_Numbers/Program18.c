/*
3. Accept N numbers from user and return the difference between largest 
and smallest number. 
Input : N : 6 
 Elements : 85 66 3 66 93 88 
Output : 90 (93 -3) 
*/
#include<stdio.h>
#include<stdlib.h>

int Difference(int *arr,int iSize)
{
    int i=0,iMin=arr[0],iMax=arr[0];
    for(i=0;i<iSize;i++)
    {
        if(arr[i]<iMin)
        {
            iMin=arr[i];
        }
        if(arr[i]>iMax)
        {
            iMax=arr[i];
        }

    }
    return iMax-iMin;
}

int main()
{
    int *p=NULL;
    int iLength=0,i=0,iRet=0;

    printf("Enter the number of elements of Array :\n");
    scanf("%d",&iLength);

    p=(int*)malloc(iLength*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter the elements :\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&p[i]);
    }
    iRet=Difference(p,iLength);
    printf("difference between largest and smallest number is %d",iRet);

    free(p);
    return 0;
}