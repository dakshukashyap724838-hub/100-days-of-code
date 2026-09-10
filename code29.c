//Q29: Write a program to calculate the factorial of a number.


//Sample Test Cases:
//Input 1:
//5
//Output 1:
//120

//Input 2:
//3
//Output 2:
//6


#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;

    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }

        printf("%llu", factorial);
    }

    return 0;
}