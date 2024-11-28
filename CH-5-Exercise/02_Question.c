// Ques.2. Write a program to find last digit of a given number

#include <stdio.h>

int main()
{
    int number, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    printf("The last digit of %d is %d", number, lastDigit);

    return 0;
}








