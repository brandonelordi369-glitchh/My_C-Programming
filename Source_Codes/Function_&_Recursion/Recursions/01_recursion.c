#include <stdio.h>

// Function Definition..
int Factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * Factorial(n - 1);
}

int main()
{
    int a;
    printf("Enter a number to get its factorial: \n");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Invalid input!\n");
        return 0;
    }
    else
    {
        printf("The factorial of this number is: %d \n", Factorial(a));
    }
    return 0;
}