/*
4. Accept Character from user and check whether it is special symbol 
or not (!, @, #, $, %, ^, &, *). 
Input : % 
Output : TRUE 
Input : d 
Output : FALSE  
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpacial(char ch)
{
    if((ch>='!')&&(ch<='*'))
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
    printf("Enter a Charater :\n");
    scanf("%c",&cValue);
    bRet=ChkSpacial(cValue);

    if(bRet==TRUE)
    {
        printf("It is Spacial Symobol\n");
    }
    else
    {
        printf("It is Not Spacial\n");
    }

    return 0;
}