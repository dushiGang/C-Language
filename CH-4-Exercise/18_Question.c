// Ques.18. Write a program which takes a character as input and print its ASCII code.

#include <stdio.h>

int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    printf("The ASCII code of '%c' is %d", character,(int) character);

    return 0;
}










