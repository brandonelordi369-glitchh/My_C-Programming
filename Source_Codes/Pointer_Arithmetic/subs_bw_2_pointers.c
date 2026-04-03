#include <stdio.h>

int main()
{
    int arr[10] = {2, 4, 8, 5, 0, 2, 3, 4, 5, 1};
    int *ptr = arr;

    int i = 0;
    while (i < 10)
    {
        printf("the value is %d\n", *ptr);
        i++;
    }

    return 0;
}