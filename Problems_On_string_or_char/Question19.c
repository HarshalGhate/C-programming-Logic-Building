/*
4. Write a program which accept string from user and display only 
digits from that string. 
Input : “marve89llous121” 
Output : 89121 
Input : “Demo” 
Output :
*/

#include<stdio.h>

void DisplayDigits(char *str)
{
    while (*str!='\0')
    {
        if((*str>='0')&&(*str<='9'))
        {        
            printf("%c",*str);
        }    
        str++;
    }
} 

int main()
{
    char arr[30];
    printf("Enter the string :\n");
    scanf("%[^'\n']s",arr);
    DisplayDigits(arr);
    return 0;
}