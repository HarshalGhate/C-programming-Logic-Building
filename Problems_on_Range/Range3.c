/*
3. Write a program which accept range from user and return addition of all numbers 
in between that range. (Range should contains positive numbers only) 
Input : 23 30 
Output : 212 
Input : 10 18 
Output : 126 
Input : -10 2
Output : Invalid range 
Input : 90 18 
Output : Invalid range 
*/

#include<stdio.h>

int DisplayRangeSum(int iStart,int iEnd)
{   int i=0,iSum=0;
    if(iStart<0)
	{
		iStart=-iStart;
	}
	if(iEnd<0)
	{
		iEnd=-iEnd;
	}
	if(iStart>iEnd)
	{
		printf("Invalid range.");
	}
    for(i=iStart;i<=iEnd;i++)
    {
        iSum+=i;
    }
    return iSum;
}

int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);
    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    iRet=DisplayRangeSum(iValue1,iValue2);
    if(iRet>0)
    {
        printf("Sum of the Range =%d",iRet);
    }    
    return 0;
}