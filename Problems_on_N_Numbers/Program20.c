/*
5. Accept N numbers from user and display summation of digits of each 
number. 
Input : N : 6 
 Elements : 8225 665 3 76 953 858 
Output : 17 17 3 13 17 21 
*/

#include<stdio.h>
#include<stdlib.h>

int Sumation(int iNo)
{
    int iDigit=0,iSum=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
    }
    return iSum;
}

void DigitsSum(int arr[],int iSize)
{
    int i=0,iRet=0;
    for(i=0;i<iSize;i++)
    {
        iRet=Sumation(arr[i]);
        printf("%d\t",iRet);
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