#include <stdio.h>

int sum(int, int);

int sum(int a, int b)
{
    // a = 3; // This will not change the original value of the Argument.
    return a + b;
}

int main()
{
    int x = 7, u = 8;
    printf("The sum of %d & %d is %d .\n", x, u, sum(x, u));
    return 0;
}