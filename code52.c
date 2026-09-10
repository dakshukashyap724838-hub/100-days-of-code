//Q52: Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main(void)
{
    int groups[] = {1, 3, 5, 3, 1};

    for (int group = 0; group < 5; group++)
    {
        for (int star = 0; star < groups[group]; star++)
        {
            printf("*\n");
        }

        if (group < 4)
        {
            printf("\n");
        }
    }

    return 0;
}