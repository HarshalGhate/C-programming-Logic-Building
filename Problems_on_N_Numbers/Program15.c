/*
5. Accept N numbers from user and return product of all odd elements. 
Input : N : 6 
 
 Elements : 15 66 3 70 10 88 
Output : 45 
Input : N : 6 
 
 Elements : 44 66 72 70 10 88 
Output : 0
*/
#include<stdio.h>
#include<stdlib.h>
int OddProduct(int *arr,int iSize)
{
    int i=0,iMult=1;
    
    for(i=0;i<iSize;i++)
    {   
        if(arr[i]%2!=0)
        {
            iMult=iMult*arr[i];
        }
        
    }
    return iMult;
}
int main()
{
    int iLength=0;
    int *p=NULL;
    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);
    p=(int*)malloc(iLength*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter the Elements\n");
    for(int i=0;i<iLength;i++)
    {
        scanf("%d",&p[i]);
    }
    int iRet=OddProduct(p,iLength);
    printf("Product of Odd Numbers :%d",iRet);
    free(p);  
    return 0;
}