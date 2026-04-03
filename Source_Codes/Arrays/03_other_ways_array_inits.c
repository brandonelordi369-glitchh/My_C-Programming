#include <stdio.h>

int main()
{
    // int marks[4] = {44, 43, 77, 87};
    int marks[] = {44, 43, 77, 87}; // Arrays can be initialized while declaration..

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", marks[i]);
    } 

    return 0;
}