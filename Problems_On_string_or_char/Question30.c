/*
5. Write a program which 2 strings from user and concat second string 
after first string. (Implement strcat() function). 
Input : “Marvellous Infosystems” 
 “Logic Building” 
Output : “Marvellous Infosystems Logic Building” 
*/
#include<stdio.h>
void  StrCatX(char *src,char *dest)
{
    if((*src==NULL)||(*dest==NULL))
    {
        return;
    }
    while(*src!='\0')
    {
        src++;
    }
    *src=' ';
    src++;
    while(*dest!='\0')
    {
        *src=*dest;
        dest++;
        src++;
    }
    *src='\0';

}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter the First string :\n");
    scanf("%[^'\n']s",arr);
    printf("Enter the Second string :\n");
    scanf(" %[^'\n']s",brr);

    StrCatX(arr,brr);
    printf("%s",arr);

    return 0;
}