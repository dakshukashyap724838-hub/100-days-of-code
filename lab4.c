#include<stdio.h>
int main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    printf("the sum of n natural numbers is");
    int sum = (n*(n+1))/2;
    printf("%d", sum);
    return 0;

}