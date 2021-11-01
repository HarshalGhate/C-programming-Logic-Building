/*
5. Accept character from user and display its ASCII value in decimal, 
octal and hexadecimal format. 
Input : A 
Output : Decimal 65 
        Octal 0101 
        Hexadecimal 0X41
*/

#include<stdio.h>
void Display(char c)
{
    char ch='\0';
    for(ch='A';ch<='Z';ch++)
    {
        if(ch==c)
        {
            printf("Decimal %d\n Octal %o\n Hexadecimal %x",ch,ch,ch);
        }    
    }
}
int main()
{
    char cValue='\0';
    printf("Enter the character :\n");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}