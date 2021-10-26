#include<stdio.h>

void Display(char *str)
{
    while(*str!='\0')
    {
        printf("%c",*str);
        str++;
    }
}

int main()
{
    char Arr[10];
    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);
    Display(Arr);
    return 0;
}
