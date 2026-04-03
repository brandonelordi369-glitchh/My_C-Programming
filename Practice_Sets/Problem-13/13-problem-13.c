/*
Write a program to find greatest of four numbers entered by the user.
*/

#include <stdio.h>

int main()
{
    int a, b, c, d, greatest;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    printf("Enter 4th number: ");
    scanf("%d", &d);

    greatest = a;

    if (b > greatest)
        greatest = b;
    if (c > greatest)
        greatest = c;
    if (d > greatest)
        greatest = d;

    printf("The greatest number is: %d", greatest);

    return 0;
}
