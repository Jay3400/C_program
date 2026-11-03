#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   CheckDivisbility by 5
//  Input           :   Integer
//  Output          :   Void
//  Description     :   Checks whether CheckDivisbility by 5
//  Date            :   22/10/2026
//  Author          :   Jay Pravin Burde
//
///////////////////////////////////////////////////

void CheckDivisbility(int iValue)
{
    if(iValue % 5 ==0)
    {
        printf("%d is divisible by 5\n", iValue);
    }
    else
    {
        printf("%d is not  divisible by 5\n", iValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisbility(iValue);

    return EXIT_SUCCESS;
}