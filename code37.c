//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() {
    int first, second, a, b, remainder, gcd, lcm;

    scanf("%d %d", &first, &second);

    a = first;
    b = second;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    gcd = a;
    lcm = (first * second) / gcd;

    printf("%d", lcm);

    return 0;
}
