// Write a Program to swap the number taking the help of third variable.

#include <stdio.h>

void swapp(int *x, int *y);

void swapp(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    a = 4;
    b = 9;
    printf("Numbers before swapping: a = %d, b = %d\n", a, b);

    swapp(&a, &b);
    printf("Numbers after swapping: a = %d, b = %d\n", a, b);

    return 0;
}