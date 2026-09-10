//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int factorial(int number)
{
    int result = 1;

    for (int value = 2; value <= number; value++) {
        result *= value;
    }

    return result;
}

int main()
{
    int number, originalNumber, sum = 0;

    scanf("%d", &number);
    originalNumber = number;

    do {
        sum += factorial(number % 10);
        number /= 10;
    } while (number != 0);

    if (sum == originalNumber)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}