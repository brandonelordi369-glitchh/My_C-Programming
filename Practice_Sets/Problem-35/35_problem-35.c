/*
Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/

#include <stdio.h>

int *sum(int, int);

float *avgr(float, float);

int *sum(int a, int b)
{
    int s;
    s = a + b;
    int *fptr1 = &s;
    printf("The sum of the both numbers is %d\n", s);

    return fptr1;
}

float *avgr(float a, float b)
{
    float ag;
    ag = (a + b) / 2.0;
    float *fptr2 = &ag;
    printf("The average of the both numbers is %f\n", ag);

    return fptr2;
}

int main()
{
    int x = 5, y = 9;
    // sum(x, y);
    // avgr(x, y);

    int *ptr1 = sum(x, y);
    float *ptr2 = avgr(x, y);

    printf("The address of 'sum' is %p and the address of 'average' is %p\n", ptr1, ptr2);

    return 0;
}