//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int number, original, remainder;
    int digits = 0;
    int sum = 0;

    scanf("%d", &number);

    if (number < 0) {
        printf("Not Armstrong");
        return 0;
    }

    original = number;

    if (number == 0) {
        digits = 1;
    } else {
        while (number != 0) {
            digits++;
            number /= 10;
        }
    }

    number = original;

    do {
        remainder = number % 10;
        sum += power(remainder, digits);
        number /= 10;
    } while (number != 0);

    if (sum == original) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }

    return 0;
}