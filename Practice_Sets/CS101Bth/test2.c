#include <stdio.h>

int main()
{
    float p, r, t;

    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);

    float si;
    si = (p * r * t) / 100;

    printf("the simple interest is: %.2f\n", si);

    return 0;
}