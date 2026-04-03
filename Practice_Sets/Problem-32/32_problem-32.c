// Write a program to change the value of a variable to ten times of its current value.

#include <stdio.h>

void v10x(int *a);

void v10x(int *a)
{
    *a *= 10;
}

int main()
{
    int s = 2;
    printf("%d\n", s);
    v10x(&s);
    printf("%d\n", s);
    return 0;
}