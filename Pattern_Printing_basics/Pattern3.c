//Accept number from user and print its number line 
//Input: 4
//output: -4 -3 -2 -1 0 1 2 3 4 

#include<stdio.h>

void Pattern(int iNo)
{
    int i=0;
    if(iNo<0)
	{
		iNo=-iNo;
	}
    for(i=-iNo;i<=iNo;i++)
    {
        printf("%d\t",i);
    }
}

int main()
{
    int iValue=0;
    printf("Enter the number: ");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}