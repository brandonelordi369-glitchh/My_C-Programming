//  Use the library function to calculate the area of a square with side a.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, area;

    printf("Enter the side of the square: ");
    scanf("%f", &a);

    area = pow(a, 2);   // library function

    printf("Area of the square = %.2f\n", area);

    return 0;
}
