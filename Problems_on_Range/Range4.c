/*
3. Write a program which accept range from user and returnAddition all 
Even Numbers in between that range. (Range should contains positive numbers only) 

Input: 23 30
output: 108 
 
*/

#include<stdio.h>

int DisplaySumEven(int iStart,int iEnd)
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
        if(i%2==0)
        {
            iSum=iSum+i;
        }    
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

    iRet=DisplaySumEven(iValue1,iValue2);
    if(iRet>0)
    {
        printf("Sum of Even Range =%d",iRet);
    }    
    return 0;
}