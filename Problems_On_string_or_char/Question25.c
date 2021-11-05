/*
5. Write a program which accept string from user reverse that string 
in place. 
Input : “abcd” 
Output : “dcba” 
Input : “abba” 
Output : “abba” 
*/

#include<stdio.h>
void StrRevX(char *str)
{
    char *start,*end;
     start=str;
     end=str;
    while(*end!='\0')
    {
        end++;
    }
    end--;
    while(start<end)
    {
        char temp;
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main()
{
    char arr[30];
    printf("Enter the string :\n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);
    printf("Updated string :%s",arr);
    return 0;
}