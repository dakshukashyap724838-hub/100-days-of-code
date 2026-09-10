#include<stdio.h>
int main()
{
    int n, i, r;
    printf("Enter any number:");
scanf("%d",&n);
int sum=0;
while(n>0)
{
    r=n%10;
    sum= sum + r;
    n = n/10;
}
printf("The sum of digit of number is %d", sum);
return 0;

}

