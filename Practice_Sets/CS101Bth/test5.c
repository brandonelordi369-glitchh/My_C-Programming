// Write a Program to find the greater number enter by user.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is greatest.\n");
    }
    else if (b > a && b > c)
    {
        printf("b is greatest.\n");
    }
    else if (c > b && c > a)
    {
        printf("c is greatest.\n");
    }
    return 0;
}