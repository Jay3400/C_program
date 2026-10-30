// Accept one number from user and print that number of * on screen
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
void Display(int iNO)
{
    int iCnt = 0;
    while(iCnt < iNO)
    {
        printf("*");
        iCnt++;
    }

}
int main()
{
    int iValue =0;
    printf("Enter number : ");

    scanf("%d",& iValue);

    Display(iValue);
    return 0;
}
