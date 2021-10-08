/*
4. Accept N numbers from user and return frequency of 11 form it. 
Input : N : 6 
 Elements : 85 66 3 15 93 88 
Output : 0 
Input : N : 6 
 Elements : 85 11 3 15 11 111 
Output : 2
*/

#include<stdio.h>
#include<stdlib.h>

int Check(int *Arr,int iSize)
{
    int i=0,iCnt=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==11)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iLength=0,i=0,iRet=0;
    

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

    iRet=Check(p,iLength);
    printf("Count of 11 : %d",iRet);    
    free(p);
    return 0;
}
