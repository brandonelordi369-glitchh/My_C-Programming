/*
Write a program to print the value of a variable 'i' by
using “pointer to pointer” type of variable.
*/

#include <stdio.h>


int main(){
    int i = 4;
    int *k = &i;
    int **m = &k;
    
    printf("The value of variable 'i' is %d\n", **m);
    return 0;
}