// Write a program to check whether a number is divisible by 97 or not.

#include <stdio.h>

int main() {
    int a;
    printf("Enter a number to check if it's divisible by 97 or not: ");
    scanf("%d", &a);
    
    if (a % 97 == 0)
    {
        printf("yes! this number is divisible by 97.");
    }
    else
    {
        printf("No! this number isn't divisible by 97.");
    }
    
    return 0;
}