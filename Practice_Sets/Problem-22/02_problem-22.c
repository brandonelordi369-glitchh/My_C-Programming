// Write a program to check whether a given number is prime using 'while' loop.

#include <stdio.h>

int main()
{
    int n;
    int notPrime = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        notPrime = 1;
    }
    else
    {
        int i = 2;
        while (i < n)
        {
            if (n % i == 0)
            {
                notPrime = 1;
                break;
            }
            i++;
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