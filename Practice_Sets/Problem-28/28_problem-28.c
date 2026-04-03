// Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>

int sumNatural(int n)
{
    if (n == 0)
        return 0;

    return n + sumNatural(n - 1);
}

int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);

    printf("The sum of first %d natural numbers is %d.\n", a, sumNatural(a));

    return 0;
}
