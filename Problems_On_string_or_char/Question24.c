/*
4.Write a program which accept string from user and accept one 
character. Return index of last occurrence of that character. 
Input : “Marvellous Multi OS” 
 M 
Output : 11 
Input : “Marvellous Multi OS” 
 W 
Output : -1 
Input : “Marvellous Multi OS” 
 e 
Output : 4 
*/

#include<stdio.h>

int FirstChar(char *str,char ch)
{
   int i=0,index=-1;
   while(str[i]!='\0')
   {
       if(str[i]==ch)
       {
           index=i;
       }
       i++;
   }
   return index;
   
}

int main()
{
    char arr[30];
    char cValue='\0';
    int iRet=0;
    printf("Enter the string :\n");
    scanf("%[^'\n']s",arr);
    printf("Enter the character to check :\n");
    scanf(" %c",&cValue);
    iRet=FirstChar(arr,cValue);
    printf("Last Occurrence :%d",iRet);
   
    return 0;
}