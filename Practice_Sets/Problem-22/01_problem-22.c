// Write a program to check whether a given number is prime using 'for' loop.

#include <stdio.h>

int main()
{
    int n, notPrime = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        notPrime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                notPrime = 1;
                break;
            }
        }
    }

    if (notPrime == 1)
    {
        printf("It's Not a prime number..\n");
    }
    else
    {
        printf("It is a Prime number.\n");
    }

    return 0;
}