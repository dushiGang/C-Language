//Ques.4. Write a program to find middle digit of a given three digit number

#include <stdio.h>

int main() {
    int number, middleDigit;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    middleDigit = (number / 10) % 10;

    printf("The middle digit of %d is %d", number, middleDigit);

    return 0;
}










