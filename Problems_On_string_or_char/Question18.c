/*
3.Write a program which accept string from user and toggle the case. 
Input : “Marvellous Multi OS” 
Output : mARVELLOUS mULTI os
*/

#include<stdio.h>

void strtoggleX(char *str)
{
    while (*str!='\0')
    {
        
        if((*str>='a')&&(*str<='z'))
        {
            *str=*str+('A'-'a');
        }
        else if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+('a'-'A');
        }
        printf("%c",*str);
        str++;
    }
} 

int main()
{
    char arr[30];
    printf("Enter the string :\n");
    scanf("%[^'\n']s",arr);
    strtoggleX(arr);
    return 0;
}