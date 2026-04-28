// Write a program to create an array of 10 integers &
// store multiplication table of 5 in it.

#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}