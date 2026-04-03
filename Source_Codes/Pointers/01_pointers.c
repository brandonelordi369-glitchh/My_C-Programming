#include <stdio.h>

int main()
{
    int i = 23;
    int *j = &i; // j is a pointer pointing to i

    int k = 45;

    printf("The address of 'i' is %p\n", (void *)&i);
    printf("The address of pointer 'j' is %p\n", (void *)j);
    printf("The address of pointer 'j' is %u\n", (void *)j);
    printf("The address of 'k' is %p\n", (void *)&k);
    printf("\n");
    printf("The value at address 'j' is %d\n", *j);
    printf("The value at address 'j' is %d\n", *(&i));

    return 0;
}