//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Array me kam se kam 2 elements hone chahiye.\n");
        return 1;
    }

    int value;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int foundSecond = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);

        if (value > largest) {
            secondLargest = largest;
            largest = value;

            if (i > 0) {
                foundSecond = 1;
            }
        } else if (value < largest && value > secondLargest) {
            secondLargest = value;
            foundSecond = 1;
        }
    }

    if (foundSecond) {
        printf("Second largest element: %d\n", secondLargest);
    } else {
        printf("Second largest distinct element nahi hai.\n");
    }

    return 0;
}