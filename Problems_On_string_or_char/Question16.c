/*
1.Write a program which accept string from user and convert it into 
lower case. 
Input : “Marvellous Multi OS” 
Output : marvellous multi os
*/

#include<stdio.h>

void strlwrX(char *str)
{
    while (*str!='\0')
    {
        
        if((*str>='A')&&(*str<='Z'))
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
    strlwrX(arr);
    return 0;
}