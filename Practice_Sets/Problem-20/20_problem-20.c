/*
Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/

#include <stdio.h>

int main()
{
    int i = 1, n = 0;

    for (i; i <= 10; i++)
    {
        n += (8 * i);
        i++;
    }

    printf("The sum of the numbers occurring in the multiplication table of 8 is: %d\n", n);
    return 0;
}