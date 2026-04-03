#include <stdio.h>

// Function Prototype..
int sum(int, int);

// Function Definition..
int sum(int x, int y)
{
    // printf("The sum of these two numbers is %d .\n", x + y);
    return x + y;
}

int main()
{
    int a = sum(3, 2); // Function Call..
    printf("The sum of these two numbers is %d .\n", a);

    int b = sum(1, 2);
    printf("The sum of these two numbers is %d .\n", b);

    int c = sum(5, 4);
    printf("The sum of these two numbers is %d .\n", c);

    return 0;
}