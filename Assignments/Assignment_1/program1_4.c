//  Accept one number and check whether is divisble by 5 or not
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
///////////////////////////////////////////////////
//
//  Function Name   :   Divisible 
//  Input           :   Integer, Integer 
//  Output          :   Integer
//  Description     :   check whether is divisible
//  Date            :   17/10/2026
//  Author          :   Jay Pravin Burde
//
///////////////////////////////////////////////////
  
BOOL Check(int iNO )
{
    if((iNO % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number  : ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    
    }
    else
    {
        printf("Not Divisble by 5");
    }
    return 0;
}
