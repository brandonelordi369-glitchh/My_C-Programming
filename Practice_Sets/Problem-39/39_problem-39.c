// Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

void printArray(int *ptr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int len)
{
    int temp;

    for (int i = 0; i < (len / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    printArray(arr, 7);

    // Reversing the array..
    reverseArray(arr, 7);

    printArray(arr, 7);

    return 0;
}