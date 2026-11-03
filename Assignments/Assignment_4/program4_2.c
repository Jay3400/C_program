#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   CheckEvenOdd
//  Input           :   Integer
//  Output          :   Void
//  Description     :   Checks whether a number is even or odd
//  Date            :   22/10/2026
//  Author          :   Jay Pravin Burde
//
///////////////////////////////////////////////////

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("%d is Even Number\n", iValue);
    }
    else
    {
        printf("%d is Odd Number\n", iValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}