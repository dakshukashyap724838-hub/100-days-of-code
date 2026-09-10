// Q25: Implement a basic calculator using switch-case.
#include <stdio.h>

int main()
{
    int firstNumber, secondNumber;
    char operator;

    scanf("%d %d %c", &firstNumber, &secondNumber, &operator);

    switch (operator) {
        case '+':
            printf("%d", firstNumber + secondNumber);
            break;
        case '-':
            printf("%d", firstNumber - secondNumber);
            break;
        case '*':
            printf("%d", firstNumber * secondNumber);
            break;
        case '/':
            if (secondNumber == 0) {
                printf("Cannot divide by zero");
            } else {
                printf("%d", firstNumber / secondNumber);
            }
            break;
        case '%':
            if (secondNumber == 0) {
                printf("Cannot divide by zero");
            } else {
                printf("%d", firstNumber % secondNumber);
            }
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
