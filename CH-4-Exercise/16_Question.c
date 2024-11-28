// Ques.16. Write a program to calculate the average of three numbers

#include <stdio.h>

int main()
{
    float num1, num2, num3, average;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    average = (num1 + num2 + num3) / 3;

    printf("The average of %f, %f, and %f is %f", num1, num2, num3, average);

    return 0;
}
