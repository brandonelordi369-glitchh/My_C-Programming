// Write a program to check whether a given number is prime using 'Do-While' loop.

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
    else if (n == 2)
    {
        notPrime = 0;
    }
    else
    {
        int i = 2;
        do
        {
            if (n % i == 0)
            {
                notPrime = 1;
                break;
            }
            i++;
        } while (i < n);
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