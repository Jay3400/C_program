// find greater two number's
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   FindGreater Number
//  Input           :   Integer
//  Output          :   void
//  Description     :   Greater of  two number's
//  Date            :   22/10/2026
//  Author          :   Jay Pravin Burde
//
///////////////////////////////////////////////////
void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is greater\n", iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is greater\n", iSecond);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}