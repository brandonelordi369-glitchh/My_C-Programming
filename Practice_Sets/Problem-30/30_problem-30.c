/*
Write a program to print the address of a variable.
Use this address to get the value of the variable.
*/

#include <stdio.h>

int main()
{
    int a = 4;
    int *d = &a;

    printf("The address of the variable 'a' is %p\n", (void *)d);
    printf("The value present in this address is %d\n", *d);
    return 0;
}