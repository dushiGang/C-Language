// Ques.5.Write a program to swap values of two int variables

// Using a Temporary Variable:
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter the first number a: ");
    scanf("%d", &a);
    printf("Enter the second number b: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

/*
Without Using a Temporary Variable:
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first number a: ");
    scanf("%d", &a);
    printf("Enter the second number b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

*/















