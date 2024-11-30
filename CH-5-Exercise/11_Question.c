//Ques.11. Write a program to print 5 greater number of user input. (if user enters 7 your output should be 12) 

#include <stdio.h>

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the number that is 5 greater
    result = number + 5;

    printf("The number 5 greater than %d is: %d\n", number, result);

    return 0;
}













