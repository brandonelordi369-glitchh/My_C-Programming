/*
1. Write a C program to calculate area of a rectangle:
    a. Using hard coded inputs.  // matlab pehle hi value assign krdo variable ko..z
    b. Using inputs supplied by the user.
*/

#include<stdio.h>

int main(){
    float a;
    float b;

    printf("Enter the value of 'a': ");
    scanf("%f", &a);

    printf("Enter the value of 'b': ");
    scanf("%f", &b);

    printf("the area of this rectangle is: %.2f\n", a*b);
    return 0;
}