/*
1. Accept N numbers from user and return difference between summation 
of even elements and summation of odd elements. 
Input : N : 6 
 Elements : 85 66 3 80 93 88 
Output : 53 (234 - 181)
*/
#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr,int iSize)
{
    int i=0,iEvenSum=0,iOddSum=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%2==0)
        {
            iEvenSum+=Arr[i];
        }
        else
        {
            iOddSum+=Arr[i];
        }
    }
    return iEvenSum-iOddSum;
}

int main()
{
    int *arr=NULL;
    int iLength=0,i=0,iRet=0;

    printf("Enter the number of Elements :\n");
    scanf("%d",&iLength);

    arr=(int*)malloc(iLength*sizeof(int));   

    printf("Enter the Array Elements :\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&arr[i]);
    }

    iRet=Difference(arr,iLength);
    printf("Difference between summation of even elements and summation of odd elements=%d",iRet);
    free(arr);
    return 0;
}