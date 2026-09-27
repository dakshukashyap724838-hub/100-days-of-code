//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    // Print first character
    if (str[0] != ' ')
        printf("%c.", str[0]);

    // Print character after every space
    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != '\0')
        {
            printf("%c.", str[i + 1]);
        }
    }

    return 0;
}
