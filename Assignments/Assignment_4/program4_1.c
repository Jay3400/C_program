//1- Check whether a Number Is Positive or  Negative

//Expected Output :
//Input 15 -- positive Number
//Input -8 -- Negative Number
//Input 0  -- zero
///////////////////////////////////////////////////
//
//  Function Name   :   positive or negative 
//  Input           :   Integer, Integer 
//  Output          :   Integer
//  Description     :   Performs positive or negative  
//  Date            :   22/10/2026
//  Author          :   Jay Pravin Burde
//
///////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("%d is Positive Number\n", iValue);
    }
    else if(iValue < 0)
    {
        printf("%d is Negative Number\n", iValue);
    }
    else
    {
        printf("%d is Zero\n", iValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
