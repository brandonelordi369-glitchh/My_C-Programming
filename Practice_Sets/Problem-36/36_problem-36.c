/*
Create an array of 10 numbers. Verify using pointer arithmetic that *(ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the array.
*/

#include <stdio.h>

int main()
{
    int arr[10] = {5, 7, 3, 9, 0, 6, 2, 4, 1, 8};

    int* ptr;
    ptr = arr;
    
    printf("%d\n", *ptr);

    printf("(ptr + 2)\n");

    // ptr += 2;   // this moves pointer permanently..
    // printf("%d\n", *ptr);

    printf("%d\n", *(ptr + 2));   // this is for verification only..

    return 0;
}