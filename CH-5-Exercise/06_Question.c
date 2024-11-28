//.Ques.6. Write a program to swap values of two int variables without using third variable

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first number a: ");
    scanf("%d", &a);
    printf("Enter the second number b: ");
    scanf("%d", &b);

    // Swapping without a third variable
    a = a + b;                      // Step 1: Add a and b
    b = a - b;                     // Step 2: Subtract b from the sum to get the original value of a
    a = a - b;                    // Step 3: Subtract the new b from the sum to get the original value of b

    // Display the swapped values
    printf("After swapping:");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
