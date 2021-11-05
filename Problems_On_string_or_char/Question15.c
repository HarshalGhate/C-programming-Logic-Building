/*
3. Write a program which accept string from user and display it inn 
reverse order. 
Input : “MarvellouS” 
Output : “SuollevraM”
*/

#include<stdio.h>

void DisplayRev(char *str)
{
    int iCnt=0;
    while (*str!='\0')
    {
        iCnt++;    
        str++;
    }
    str--;
    while (iCnt>0)
    {
        printf("%c",*str);
        iCnt--;
        str--;
    }
           
}

int main()
{
    char arr[30];
    printf("Enter the String :\n");
    scanf("%[^'\n']s",arr);

    DisplayRev(arr);
    return 0;
}
