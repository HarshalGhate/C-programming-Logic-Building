//Accept number from user and print till that number 
//Input: 8
//output: 1 2 3 4 5 6 7 8

#include<stdio.h>

void Pattern(int iNo)
{
    int i=0;
    if(iNo<0)
	{
		iNo=-iNo;
	}
    for(i=1;i<=iNo;i++)
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