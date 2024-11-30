//Ques.14.Write a program to input two digit number and your output should be reverse of number. (if user enters 45, your output should be 54) 

#include <stdio.h>

int main() {
    int number, tens, ones, reversed;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    // Extract the tens and ones place
    tens = number / 10;      // Get the tens place
    ones = number % 10;      // Get the ones place

    // Reverse the number
    reversed = (ones * 10) + tens;

    // Display the reversed number
    printf("The reversed number is: %d\n", reversed);

    return 0;
}












