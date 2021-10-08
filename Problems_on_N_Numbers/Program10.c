/*
5. Accept N numbers from user and accept one another number as NO , 
return frequency of NO form it.
Input : N : 6 
 NO: 66 
 Elements : 85 66 3 66 93 88 
Output : 2 
Input : N : 6 
 NO: 12 
 Elements : 85 11 3 15 11 111 
Output : 0 
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int *Arr,int iSize,int iNo)
{
    int i=0,iCnt=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==iNo)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iLength=0,i=0,iRet=0,iValue=0;
    

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

    printf("Elements of Array :\n");
    for(i=0;i<iLength;i++)
    {
        printf("%d\t",p[i]);
    }
    printf("\n");

    printf("Enter the number to Count Frequency:\n");
    scanf("%d",&iValue);

    iRet=Frequency(p,iLength,iValue);
    printf("Count of %d : %d",iValue,iRet);    
    free(p);
    return 0;
}
