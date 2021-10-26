/*
2. Accept Character from user and check whether it is capital or not 
(A-Z). 
Input : F 
Output : TRUE 
Input : d 
Output : FALSE 
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter a Charater\n");
    scanf("%c",&cValue);
    bRet=ChkCapital(cValue);

    if(bRet==TRUE)
    {
        printf("It is Capital\n");
    }
    else
    {
        printf("It is Not Capital\n");
    }

    return 0;
}