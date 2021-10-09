/*
4. Accept N numbers from user and accept Range, Display all elements from 
that range 
Input : N : 6 
 Start: 60 
 End : 90 
 
 Elements : 85 66 3 76 93 88 
Output : 85 66 76 88

Input : N : 6 
 Start: 30 
 End : 50 
 
 Elements : 85 66 3 76 93 88 
*/
#include<stdio.h>
#include<stdlib.h>
void Range(int *arr,int iSize,int iStart,int iEnd)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if((arr[i]>iStart)&&(arr[i]<iEnd))
        {
            printf("%d\t",arr[i]);
        }    
    }
}
int main()
{
    int *p=NULL;
    int iLength=0,iSize=0,iValue1=0,iValue2=0;
    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    printf("Enter Starting Point :\n");
    scanf("%d",&iValue1);
    printf("Enter Ending Point :\n");
    scanf("%d",&iValue2);

    p=(int *)malloc(iLength*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to aloocate memory\n");
        return -1;
    }

    printf("Enter the Elements:\n");
    for(int i=0;i<iLength;i++)
    {
        scanf("%d",&p[i]);
    }
    Range(p,iLength,iValue1,iValue2);
    return 0;
}