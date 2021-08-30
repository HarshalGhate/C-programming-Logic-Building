//accept number from user and check whether it contain 0 in it or not.
//Input: 2395
//Output:There is no Zero.
//
//Input: 1018
//Output: It contain Zero.

#include<stdio.h>
#define True 1
#define False 0
typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit=0;
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            return True;
        }
        iNo=iNo/10;
    }
}

int main()
{
    int iValue=0;
    BOOL bRet=False;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    bRet=CheckZero(iValue);

    if (bRet==True)
    {
        printf("It contain Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}