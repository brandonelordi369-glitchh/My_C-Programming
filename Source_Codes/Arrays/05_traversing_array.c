#include <stdio.h>

void traverse(int arr[], int size);

void invTraverse(int arr[], int size);

int main()
{
    int ary[7] = {4, 5, 6, 2, 8, 3, 2};

    traverse(ary, 7);
    invTraverse(ary, 7);


    return 0;
}

void traverse(int arr[], int size)
{
    printf("Array elements:~\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

void invTraverse(int arr[], int size)
{
    printf("Array elements [Reverse]:~\n");
    for (int i = (size - 1); i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}