/*
4. Write a program which accept string from user and check whether 
it contains vowels in it or not. 
Input : “marvellous” 
Output : TRUE 
Input : “Demo” 
Output : TRUE 
Input : “xyz” 
Output : FALSE 
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
    
        while(*str!='\0')
        {
            if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='s')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U')||(*str=='S'))
            {
                break;
            }
            str++;    
        }
        if(*str=='\0')
        {
            return FALSE;
        }
        else
        {
            return TRUE;
        }    
}

int main()
{
    char arr[30];
    BOOL bRet=FALSE;
    printf("Enter the string :\n");
    scanf("%[^'\n']s",arr);

    bRet=ChkVowel(arr);
    if(bRet==TRUE)
    {
        printf("string Contain Vowel\n");
    }
    else
    {
        printf("String have not Vowel\n");
    }
    return 0;
}