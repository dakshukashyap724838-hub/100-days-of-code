//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int number, original, reversed = 0, remainder;

    scanf("%d", &number);

    original = number;

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    if (original == reversed) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}