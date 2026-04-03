/*
Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?
*/

#include <stdio.h>

void print_address(int x)
{
    printf("The address of variable 'x' is %p\n", (void *)&x);
}

int main()
{
    int i = 9;
    
    printf("The address of variable 'i' is %p\n", (void *)&i);
    printf("\n");

    printf("Now will print the address of the variable from the function.. \n");

    printf("\n");
    print_address(i); // function call

    return 0;
}

// The addresses are different because the function receives
// a copy of the variable, not the original variable itself.
