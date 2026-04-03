#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    int *q = p + 3;
    printf("%d\n", *q);

    return 0;
}