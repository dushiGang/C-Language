// Ques.15.Write a program to add all digits of a three digit number. Number is given by user. (if user enters 384, your output should be 15)

#include <stdio.h>

int main()
{
    int number, hundreds, tens, ones, sum;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Extract the digits
    hundreds = number / 100;                // Get the hundreds place
    tens = (number / 10) % 10;             // Get the tens place
    ones = number % 10;                   // Get the ones place

    // Calculate the sum of the digits
    sum = hundreds + tens + ones;

    // Display the result
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}














