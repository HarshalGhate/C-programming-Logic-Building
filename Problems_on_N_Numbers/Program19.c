/*
4. Accept N numbers from user and display all such numbers which contains 
3 digits in it. 
Input : N : 6 
Elements : 8225 665 3 76 953 858 
Output : 665 953 858 
*/
#include<stdio.h>
#include<stdlib.h>

void Digits(int *arr,int iSize)
{
    int i=0,iDigits=0;
   for(i=0;i<iSize;i++)
	{	if(arr[i]<0)
		{
			arr[i]=-arr[i];
		}
		if((100<=arr[i])&&(arr[i]<=999))
		{
			printf("%d\t",arr[i]);
		}	
	}
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

    Digits(p,iLength);

    free(p);
    return 0;
}