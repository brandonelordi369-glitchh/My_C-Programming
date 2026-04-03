#include <stdio.h>

void swap(int *, int *);

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 7, u = 8;
    printf("The value of x is %d .\n", x);
    printf("The value of u is %d .\n", u);
    printf("\n");

    printf("Swapping the values now...\n");
    swap(&x, &u);

    printf("\n");
    printf("The value of x has been swapped to %d !\n", x);
    printf("The value of u has been swapped to %d !\n", u);

    return 0;
}