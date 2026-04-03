/*
Write a program using function to print the following pattern (first n lines)
*
* *
* * *
* * * *
* * * * *
*/

#include <stdio.h>

void pattern(int n);

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int a;
    printf("Enter a number greater than 0: ");
    scanf("%d", &a);

    pattern(a);
    return 0;
}