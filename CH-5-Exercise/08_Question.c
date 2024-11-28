//Ques.8. Write a program to input a number from the user and also input a digit. Append a digit in the number 
//and print the resulting number. (Example- number=234 anddigit=9 then the resulting number is 2349)

#include <stdio.h>

int main() {
    int number, digit, result;

    // Input the number and digit
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a digit to append: ");
    scanf("%d", &digit);

    // Append the digit to the number
    result = number * 10 + digit;

    // Display the resulting number
    printf("The resulting number is: %d\n", result);

    return 0;
}





















