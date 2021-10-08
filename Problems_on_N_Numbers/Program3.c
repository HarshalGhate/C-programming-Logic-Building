/*
3. Accept N numbers from user and display all such elements which are 
even and divisible by 5. 
Input : N : 6 
 Elements : 85 66 3 80 93 88 
Output : 80 
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int *Arr,int iSize)
{   
    int i=0;
   printf("Divisible by even and 5 elements are:\n");
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]%5==0)&&(Arr[i]%2==0))
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