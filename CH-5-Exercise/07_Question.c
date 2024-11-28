// Ques.7.Write a program to make the last digit of a number stored in a variable as zero.(Example - if x=2345 then make it x=2340)

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Make the last digit zero
    number = number / 10 * 10;

    printf("The number after making the last digit zero is: %d", number);

    return 0;
}











