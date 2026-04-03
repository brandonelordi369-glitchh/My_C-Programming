/*
Write a program to convert Celsius to Fahrenheit.
Formula:
	(9 x 0°C)/5 + 32 = 32°F
*/

#include <stdio.h>

int main() {
    float c;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);

    printf("The temperature in Fahrenheit is: %.2f\n", (c*9)/5 + 32);
    return 0;
}