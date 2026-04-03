// Write a program to calculate the factorial of a given number using a 'for' loop.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to get its factorial: ");
    scanf("%d", &num);

    int s = 1;
    for (int i = num; i; i--)
    {
        s *= i;
    }

    printf("The factorial of a given number is: %d\n", s);
    return 0;
}