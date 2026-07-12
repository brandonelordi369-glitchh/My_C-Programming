// Write a program containing functions which counts
// the number of positive integers in an array.

#include <stdio.h>

void numPositive(int *ptr, int len)
{
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        if (ptr[i] > 0)
        {
            count++;
        }
    }

    printf("The number of positive integers in the array is %d .\n", count);
}

int main()
{
    int arr[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    numPositive(arr, 14);

    return 0;
}