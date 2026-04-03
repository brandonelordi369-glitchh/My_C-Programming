/*
Calculate the area of a circle and modify the same program to calculate
the volume of a cylinder given its radius and height.
*/

#include <stdio.h>

int main() {
    float pi = 3.14;
    float r;
    float h;

    // for Area of the Circle..
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("The Area of the Circle is: %.2f \n", pi * (r*r));

    // for Volume of the Cylinder..
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &r);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &h);

    printf("The Volume of the Cylinder is: %.2f \n", pi * (r*r) * h);

    return 0;
}