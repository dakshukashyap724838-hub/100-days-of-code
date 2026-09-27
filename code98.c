//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, start = 0, lastSpace = -1;

    fgets(str, sizeof(str), stdin);

    // Find the last space
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            lastSpace = i;
    }

    // Print initials of first names
    for (i = 0; i < lastSpace; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
            printf("%c.", str[i]);
    }

    // Print surname in full
    printf(" ");
    for (i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
