/*
2. Accept N numbers from user and accept one another number as NO , 
return index of first occurrence of that NO. 
Input : N : 6 
 NO: 66 
 Elements : 85 66 3 66 93 88 
Output : 1

Input : N : 6 
 NO: 12 
 Elements : 85 11 3 15 11 111 
Output : -1
*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int *Arr,int iSize,int iNo)
{
    int i=0,iCnt=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==iNo)
        {
            break;
        }
    }
    if(i==iSize)
    {
        return -1;
    }
    else
    {
        return i;
    }
    
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

    printf("Enter number to check First Occarance:\n");
    scanf("%d",&iValue);

    iRet=FirstOcc(p,iLength,iValue);
    printf("First Occarance %d : %d",iValue,iRet);    
    free(p);
    return 0;
}
