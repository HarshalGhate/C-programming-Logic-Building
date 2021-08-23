/*
3.Write a program which accept number from user and display all its non factors.
Input : 12
Output : 5 7 8 9 10 11
Input : 13
Output : 2 3 4 5 6 7 8 9 10 11 12
Input : 10
Output : 3 4 6 7 8 9
*/

#include<stdio.h>

void FactRev(int iNo)
{
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        if((iNo%i)!=0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue=0;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    FactRev(iValue);
    return 0;
}
