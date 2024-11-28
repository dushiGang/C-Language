// Ques.19. Write a program to calculate the profit percentage upon selling a product. Cost price and selling price are given by the user

#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, profit, profitPercentage;

    printf("Enter the cost price of the product: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price of the product: ");
    scanf("%f", &sellingPrice);

    profit = sellingPrice - costPrice;

    profitPercentage = (profit / costPrice) * 100;

    printf("The profit percentage is %f", profitPercentage);

    return 0;
}
