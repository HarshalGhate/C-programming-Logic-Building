/*
.Write a program which accept number from user and return multiplication of all 
digits. 
Input : 2395 
Output : 270 
Input : 1018 
Output : 8 
Input : 9440 
Output : 144 
Input : 922432 
Output : 864 
*/

#include<stdio.h>
int CountMult(int iNo)
{
    int iDigit=0,iMult=1;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit!=0)
        {
            iMult=iMult*iDigit;
        }
        iNo=iNo/10;
    }
    return iMult;
}

int main()
{
   int iValue=0,iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    iRet=CountMult(iValue);
    printf("%d",iRet);
    return 0;
}
