//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    unsigned int number;
    int binary[32];
    int index = 0;

    scanf("%u", &number);

    if (number == 0) {
        printf("0");
    } else {
        while (number > 0) {
            binary[index] = number % 2;
            number /= 2;
            index++;
        }

        for (index--; index >= 0; index--) {
            printf("%d", binary[index]);
        }
    }

    return 0;
}