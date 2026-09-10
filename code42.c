//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main() {
    int number, sum = 0;

    scanf("%d", &number);

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (number > 0 && sum == number) {
        printf("Perfect number");
    } else {
        printf("Not perfect number");
    }

    return 0;
}