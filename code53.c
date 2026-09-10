//Q53: Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main(void)
{
    for (int row = 1; row <= 5; row++)
    {
        for (int star = 1; star <= (2 * row - 1); star++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int row = 4; row >= 1; row--)
    {
        for (int star = 1; star <= (2 * row - 1); star++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}