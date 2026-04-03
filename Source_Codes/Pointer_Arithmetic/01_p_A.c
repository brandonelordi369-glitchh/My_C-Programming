#include <stdio.h>

int main()
{
    int array[4] = {2, 6, 7, 3};

    int *ptr1 = &array[0];
    int *ptr2 = &array[1];
    int *ptr3 = &array[2];
    int *ptr4 = &array[3];

    printf("%p\n", ptr1);
    printf("%p\n", ptr2);
    printf("%p\n", ptr3);
    printf("%p\n", ptr4);

    ptr1++;
    ptr2++;
    ptr3++;
    ptr4++;

    return 0;
}