// Write a program to print multiplication table of a given number n.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number to get its table: ");
    scanf("%d", &n);

    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}