/*
3. Write a program which accept string from user and return 
difference between frequency of small characters and frequency of 
capital characters. 
Input : “MarvellouS” 
Output : 6 (8-2)
*/

#include<stdio.h>

int Difference(char *str)
{
     int iSmall=0,iCapital=0;
    while (*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iSmall++;
        }
        else if((*str>='A')&&(*str<='Z'))
        {
            iCapital++;
        }
        str++;
    }
    return iSmall-iCapital;
}

int main()
{
    char arr[30];
    int iRet=0;
    printf("Enter the string :\n");
    scanf("%[^'\n']s",arr);
    iRet=Difference(arr);
    printf("Difference : %d",iRet);
    return 0;
}