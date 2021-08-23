/*
    table of number
*/
#include<stdio.h>
void DisplayTable(int iNo)
{
    int i=0,iMult=1;
    for(i=1;i<=10;i++)
    {
        
        printf("%d\n",iNo*i);
    } 
}

int main()
{
    int iValue=0;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    DisplayTable(iValue);
    return 0;
}
