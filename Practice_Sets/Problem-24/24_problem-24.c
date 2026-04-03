// Write a program using function to find average of three numbers.

#include <stdio.h>

float averageOf3(float, float, float);

int main()
{
    float a, b, c;
    printf("Enter 1st value: \n");
    scanf("%f", &a);
    printf("Enter 2nd value: \n");
    scanf("%f", &b);
    printf("Enter 3rd value: \n");
    scanf("%f", &c);

    float s = averageOf3(a, b, c);
    printf("The Average of these 3 values is: %.2f\n", s);

    return 0;
}

float averageOf3(float x, float y, float z)
{
    return ((x + y + z) / 3.0);
}