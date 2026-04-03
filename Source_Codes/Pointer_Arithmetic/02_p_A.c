#include <stdio.h>

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;

    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    ptr--;
    printf("%d\n", *ptr);
    ptr--;
    printf("%d\n", *ptr);
    ptr--;
    printf("%d\n", *ptr);

    return 0;
}