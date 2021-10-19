/*
5. Accept N numbers from user and display summation of digits of each 
number. (similar in one Function)
Input : N : 6 
 Elements : 8225 665 3 76 953 858 
Output : 17 17 3 13 17 21 
*/

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int arr[],int iSize)
{
    int i=0,iRet=0;
    for(i=0;i<iSize;i++)
    {
        int iDigit=0,iSum=0;
        while(arr[i]!=0)
        {
            iDigit=arr[i]%10;
            iSum=iSum+iDigit;
            arr[i]=arr[i]/10;
        }
        printf("%d\t",iSum);
    }
}

int main()
{
    int *p=NULL;
    int iLength=0,i=0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    p=(int*)malloc(iLength*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter the elments :\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&p[i]);
    }
    DigitsSum(p,iLength);

    free(p);
    return 0;
}