/*
Write a program in C to copy the elements of one array into another array.

Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr1[],int iSize)
{
    int Arr2[10];
    int i=0;
    for(i=0;i<iSize;i++)
    {
        Arr2[i]=Arr1[i];
    }
    printf("Element of Fist Array :\n");
    for(i=0;i<iSize;i++)
    {
        printf("%d\t",Arr1[i]);
    }
    printf("\n");
    printf("Element of Second Array :\n");
    for(i=0;i<iSize;i++)
    {
        printf("%d\t",Arr2[i]);
    }
    
}

int main()
{
    int *arr=NULL;       
    int iLength=0,i=0;

    printf("Enter the number of elments :\n");
    scanf("%d",&iLength);

    arr=(int*)malloc(iLength*sizeof(int));

    printf("Enter the elements: \n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    Display(arr,iLength);

    free(arr);
    return 0;
}
