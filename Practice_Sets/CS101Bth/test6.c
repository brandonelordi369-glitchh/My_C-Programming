// Write a Program to check a year is leap year not.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the year: ");
    scanf("%d", &n);

    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {
        printf("It's a leap year..\n");
    }
    else
    {
        printf("It's not a leap year..\n");
    }

    return 0;
}