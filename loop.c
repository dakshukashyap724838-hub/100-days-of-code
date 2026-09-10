#include<stdio.h>
int main(){ 

int i=1;
double sum=0,number;
//print number from 1 to 5
while(i<=5){
printf("%d\n",i);
i++;
}

// add number until the user enters 0
do {
    printf("enter a number: ");
    scanf(" %lf", &number);
    sum += number;
}
while(number != 0.0);

printf("sum = %.21f",sum);

return(0);
}
