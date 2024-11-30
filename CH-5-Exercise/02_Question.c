// Ques.2. Write a program to find last digit of a given number

#include <stdio.h>

int main()
{
    int x,lastdigit;

    printf("Enter a number: ");
    scanf("%d", &x);

     lastdigit= x%10;

    printf("The last digit of %d is %d", x,lastdigit);

    return 0;
}








