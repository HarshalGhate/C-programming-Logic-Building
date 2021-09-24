/*
Write a program which accept range from user and display numbers in 
between that range reverse order.
*/

#include<stdio.h>

void DisplayRange(int iStart,int iEnd)
{
    int i=0;
    if(iStart>iEnd)
    {
        printf("InValid Range\n");
    }
    for(i=iEnd;i>=iStart;i--)
    {
        printf("%d\t",i);
    }
}

int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);
    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    DisplayRange(iValue1,iValue2);

    return 0;
}