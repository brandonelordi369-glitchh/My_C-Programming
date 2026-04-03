#include <stdio.h>

int fibbo(int);

int fibbo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return (fibbo(n - 1) + fibbo(n - 2));
}

int main()
{
    int x;
    printf("Enter the number to get its Fibbonacci: \n");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("Fibonacci is not defined for negative numbers.\n");
        return 0;
    }

    int a = fibbo(x);
    printf("The fibonacci of this number is: %d \n", a);

    return 0;
}