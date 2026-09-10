// Q26: Print numbers from 1 to n.
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int number = 1; number <= n; number++) {
        printf("%d", number);
        if (number < n) {
            printf(" ");
        }
    }

    return 0;
}
