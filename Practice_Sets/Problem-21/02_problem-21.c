// Write a program to calculate the factorial of a given number using 'While' loop.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to get its factorial: ");
    scanf("%d", &num);

    int s = 1, i = num;
    while(i > 0)
    {
        s *= i;
        i--;
    }
    
    printf("The factorial of a given number is: %d\n", s);
    return 0;
}