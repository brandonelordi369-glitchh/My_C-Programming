#include <stdio.h>

int sum(int *, int *);

// sum() should change the value of x..
int sum(int *a, int *b)
{
    *a = 3; // This will now change the original value of the Argument.
    return *a + *b;
}

int main()
{
    int x = 7, u = 8;
    printf("The value of x is %d .\n", x);
    printf("The sum of %d & %d is %d .\n", x, u, sum(&x, &u));
    printf("The value of x has now become %d !\n", x);
    return 0;
}