// Ques.13. Write a program to calculate the volume of a Cuboid.

#include <stdio.h>

int main()
{
    float length, width, height, volume;

    printf("Enter the length of the cuboid: ");
    scanf("%f", &length);

    printf("Enter the width of the cuboid: ");
    scanf("%f", &width);

    printf("Enter the height of the cuboid: ");
    scanf("%f", &height);

    volume = length * width * height;

    printf("The volume of the cuboid is %f ", volume);

    return 0;
}
