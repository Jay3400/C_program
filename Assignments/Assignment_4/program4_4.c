
// Check voting Eligibility

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   CheckVotingEligibility
//  Input           :   Integer
//  Output          :   void
//  Description     :   Checks whether a person is eligible
//                      for voting or not.
//  Date            :   22/10/2026
//  Author          :   Jay Pravin Burde
//
///////////////////////////////////////////////////
void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18 )
    {
        printf("%d : Eligible for voting\n", iAge);
    }
    else
    {
        printf("%d : Not eligible for voting\n", iAge);
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}