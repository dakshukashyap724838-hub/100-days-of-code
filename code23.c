// Q23: Calculate library fine based on the number of late days.
#include <stdio.h>

int main()
{
    int lateDays;
    int fine;

    scanf("%d", &lateDays);

    if (lateDays < 0) {
        printf("Invalid number of days");
    } else if (lateDays > 30) {
        printf("Membership Cancelled");
    } else if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("Fine ₹%d", fine);
    } else if (lateDays <= 10) {
        fine = (5 * 2) + ((lateDays - 5) * 4);
        printf("Fine ₹%d", fine);
    } else {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
        printf("Fine ₹%d", fine);
    }

    return 0;
}
