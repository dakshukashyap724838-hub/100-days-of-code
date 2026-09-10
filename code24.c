// Q24: Calculate the electricity bill based on units consumed.
#include <stdio.h>

int main()
{
    int units;
    int bill;

    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid number of units");
    } else if (units <= 100) {
        bill = units * 5;
        printf("Bill: ₹%d", bill);
    } else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
        printf("Bill: ₹%d", bill);
    } else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        printf("Bill: ₹%d", bill);
    } else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
        printf("Bill: ₹%d", bill);
    }

    return 0;
}
