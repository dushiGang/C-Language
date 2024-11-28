// Ques.3.Write a program to find first digit of a given three digit number

#include <stdio.h>

int main()
{
    int number, firstDigit;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    firstDigit = number / 100;

    printf("The first digit of %d is %d", number, firstDigit);

    return 0;
}










