/*
Quick Quiz: Write a program to print first 'n' natural number using do-while loop.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);

    int i = 1;
    printf("The first %d natural numbers are:- \n", n);
    
    do {
        printf("%d\n", i);
        i++;
    } while (i<=n);
    
    return 0;
}