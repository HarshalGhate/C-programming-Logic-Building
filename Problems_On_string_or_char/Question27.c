/*
2. Write a program which accept string from user and copy the 
contents of that string into another string. (Implement strncpy() 
function) 
Input : “Marvellous Multi OS” 
 10 
Output : “Marvellous 
Note : If third parameter is greater than the size of source string then 
copy whole string into destination. 
*/
#include<stdio.h>

void StrNCpyX(char *src,char *dest,int iCnt)
{
    while((*src!='\0')&&(iCnt>0))
    {
        *dest=*src;
        src++;
        dest++;
        iCnt--;
    }
    *dest='\0';
}
int main()
{
    char arr[30];
    char brr[30];
    int iValue=0;
    printf("Enter the string to Copy :\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the length to copy :\n");
    scanf("%d",&iValue);

    StrNCpyX(arr,brr,iValue);
    printf("%s",brr);
    return 0;
}