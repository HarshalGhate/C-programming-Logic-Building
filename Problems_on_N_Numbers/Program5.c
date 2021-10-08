/*
5. Accept N numbers from user and display all such elements which are 
multiples of 11. 
Input : N : 6 
 Elements : 85 66 3 55 93 88 
Output : 66 55 88 
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int *Arr,int iSize)
{   
    int i=0;
   printf("Multiply by 11 elements are:\n");
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%11==0)
        {
            printf("%d\t",Arr[i]);
        }
    }

}
int main()
{
    int *P=NULL;
    int iLength=0,i=0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    P=(int*)malloc(iLength*sizeof(int));

    if(P==NULL)
    {
        printf("Unable to allcocate Memory\n");
        return -1;
    }

    printf("Enter the Elements :\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&P[i]);
    }
    
    Display(P,iLength);

    free(P);

    return 0;
}