

#include<stdio.h>

void Reverse(char *str)
{
    char *start,*end;
    char temp;
    start=str;
    end=str;
    while (*end!='\0')
    {
        end++;
    }
    end--;
    while (start<end)
    {
       
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
    
    Reverse(arr);
    printf("Reverse string is : %s\n",arr);
    return 0;
}


