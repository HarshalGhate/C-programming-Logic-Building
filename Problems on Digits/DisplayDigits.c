/*
Write a program which accept number from user and display all Digits.
Input: 7521
output: 1       2       5       7
*/
#include<stdio.h>
void DisplayDigits(int iNo)
{
    int iDigit=0;
    while (iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\t",iDigit);
        iNo=iNo/10;
    }
    
}
int main()
{
    int iValue=0;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    DisplayDigits(iValue);
    return 0;
}
