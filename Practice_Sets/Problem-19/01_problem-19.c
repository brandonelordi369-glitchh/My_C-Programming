// Write a program to implement program 18 using 'for' loop.

#include <stdio.h>

int main()
{
    int i = 1, n = 0;
    for (i; i <= 10; i++)
    {
        n = n + i;
    }
    printf("%d\n", n);

    return 0;
}