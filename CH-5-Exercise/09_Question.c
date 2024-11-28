// Ques.9. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD

#include <stdio.h>

int main()
{
    float inr, usd;
    const float conversionRate = 76.23;

    // Input the amount in INR
    printf("Enter the amount in INR: ");
    scanf("%f", &inr);

    // Convert INR to USD
    usd = inr / conversionRate;

    // Display the result
    printf("%.2f INR is equivalent to %.2f USD\n", inr, usd);

    return 0;
}


