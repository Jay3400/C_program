//Accept  one number from user and print that number of * on acreen

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   * 
//  Input           :   Integer, Integer 
//  Output          :   Integer
//  Description     :   Performs 
//  Date            :   17/10/2026
//  Author          :   Jay Pravin Burde
//
///////////////////////////////////////////////////

void Accept(int iNO)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNO; iCnt++) //iCnt <= 5
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue =5;
     
    Accept(iValue);
    return 0;
}
