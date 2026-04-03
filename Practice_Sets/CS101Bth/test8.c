// Write a Program to print the no is positive or negative.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter integer: \n");
    scanf("%d", &a);

    if (a < 0){
        printf("The number is negative..\n");
    }
    else if (a > 0){
        printf("The number is Positive..\n");
    }
    else if (a == 0){
        printf("It's Zero! Yay...\n");
    }
    else{
        printf("Invalid Integer!!!\n");
    }

    return 0;
}