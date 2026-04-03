#include <stdio.h>

int main()
{
    float degc;
    printf("Enter the temperature in Celcius: ");
    scanf("%f", &degc);

    float fahr;
    fahr = (((9 * degc) / 5) + 32);
    printf("The temperature in fahrenheit is: %.2f\n", fahr);

    return 0;
}