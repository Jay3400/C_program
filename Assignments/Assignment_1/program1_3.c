//program to print 5 to 1 number on screen

///////////////////////////////////////////////////
//
//  Function Name   :   Addition 
//  Input           :   Integer, Integer 
//  Output          :   Integer
//  Description     :   Performs 1 to 5
//  Date            :   17/10/2026
//  Author          :   Jay Pravin Burde
//
///////////////////////////////////////////////////

#include<stdio.h>
void Display()
{
    int i = 0;
    i = 5;

    while(i >= 1)
    {
        printf("%d", i);
        i--;
    }
}
int main()
{
    Display();
    return 0;
}
