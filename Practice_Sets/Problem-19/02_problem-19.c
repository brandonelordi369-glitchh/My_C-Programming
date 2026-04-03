// Write a program to implement program 18 using 'while' loop.

#include <stdio.h>

int main()
{
    int i = 1, n = 0;

    do
    {
        n = n + i;
        i++;
    } while (i <= 10);

    printf("%d\n", n);

    return 0;
}