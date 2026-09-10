//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int number, temp, divisor = 1;
    int firstDigit, lastDigit, middle;
    printf("enter the number:");
    scanf("%d", &number);

    temp = number;

    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    firstDigit = number / divisor;
    lastDigit = number % 10;
    middle = (number % divisor) / 10;

    number = lastDigit * divisor + middle * 10 + firstDigit;

    printf("%d", number);

    return 0;
}