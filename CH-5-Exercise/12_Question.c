//Ques.12.Write a program to print user input number with the last digit lost. (if user enters 237, your output should be 23. If user inputs 4, your output should be 0) 

#include <stdio.h>

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Remove the last digit by integer division
    result = number / 10;

    printf("The number without the last digit is: %d\n", result);

    return 0;
}








