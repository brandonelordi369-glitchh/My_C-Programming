// Write a function to convert Celsius temperature into Fahrenheit..

#include <stdio.h>

float tempConverter(float);

int main()
{
    float x;
    printf("Enter the temperature in Celcius: \n");
    scanf("%f", &x);

    float t = tempConverter(x);
    printf("It's %.2f degrees in Fahrenheit.\n", t);

    return 0;
}

float tempConverter(float c)
{
    return (((9.0 * c) / 5.0) + 32.0);
}