/*
----------------------------------------Nested if else----------------------------------------------------------

Following is a program to find greater among three numbers. Notice the nested if else used in the program:
*/

#include<stdio.h>
 int main()
{
    int a, b, c;
    printf("Enter Three Numbers:");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is greater", a);
        else
            printf("%d is greater", c);
    }
    else
    {
        if (b > c)
            printf("%d is greater", b);
        else
            printf("%d is greater", c);
    }
    return 0;
}
/*
Output:
Enter three Numbers:45
33
65
55 is greater
*/
