// Ques.14. Write a program to calculate the simple interest

#include <stdio.h>

int main()
{
    float principal, rate, time, simpleInterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate : ");
    scanf("%f", &rate);

    printf("Enter the time : ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("The simple interest is %f", simpleInterest);

    return 0;
}
