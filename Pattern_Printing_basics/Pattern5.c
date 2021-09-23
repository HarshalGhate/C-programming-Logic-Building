//5. Write a program which accept N and print first 5 multiples of N.
//Input : 4
//Output : 4 8 12 16 20

#include<stdio.h>

void Pattern(int iNo)
{
    int i=0;
    if(iNo<0)
	{
		iNo=-iNo;
	}
    for(i=1;i<=5;i++)
    {
        printf("%d\t",i*iNo);
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