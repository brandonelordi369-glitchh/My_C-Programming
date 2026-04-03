// Write a program to print first ‘n’ Whole numbers using for loop

#include <stdio.h>

int main()
{
    int n; 
    printf("Enter a value: ");
    scanf("%d", &n);

    printf("The first %d Whole numbers are:- \n", n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}