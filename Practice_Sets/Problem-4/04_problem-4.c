/*
Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.
*/

#include <stdio.h>

int main() {
    float principal, rate, time;
    float simple_interest;
    
    printf("Enter the Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter the Rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the Time period: ");
    scanf("%f", &time);
    
    simple_interest = (principal * rate * time) / 100;

    printf("The Simple Interest is: %.2f\n", simple_interest);
    return 0;
}