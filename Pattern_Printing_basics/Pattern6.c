//Aceept number from user and display below pattern.
//Input: 5
//Output: A B C D E

#include<stdio.h>
void Pattern(int iNo)
{	int iCnt=0;
	char iCh='A';
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%c\t",iCh++);
	}

}

int main()
{
	int iValue=0;
	printf("Enter the number of elements:");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}


