#include<stdio.h>
int main()
{
    char i,j,str;
    printf("enter a character:");
    scanf("%c",&str);
    for(char i='A';i<=str;i++)
    {
        for(char j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");

    }
    return 0;
}
