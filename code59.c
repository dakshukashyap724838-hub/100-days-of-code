//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/


#include <stdio.h>
int main() {
    int b, i;
    int even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &b);
    int arr[b];
    for (i = 0; i < b; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}