/*
pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
          some tasks are performed more easily with pointers
          * --> indirection operator (value at address)
*/

#include <stdio.h>

void printAge(int *n)
{
   printf("You are %d years old\n", *n); //dereference
}

int main()
{
    int age = 19;
    int *pAge = NULL; // good practice to assign NULL if declaring a pointer..
    pAge = &age;

    printAge(pAge);

    printf("address of age: %p\n", &age);
    printf("value of pAge: %p\n", pAge);
    printf("\n");
    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));
    printf("\n");
    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge); //dereferencing

    return 0;
}