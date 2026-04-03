/*
An Arithmetic operation between
    • int and int → int
    • int and float → float
    • float and float → float

*/

#include <stdio.h>

int main()
{
    int a = 9;
    int b = 2;
    float c = a/b;  // It won't be 4.5
    printf("%f\n", c);

    float d = 10;
    float e = 3;
    int f = d/e;
    printf("%d\n", f);

    int g = 11;
    float h = 4;
    float j = g/h;
    printf("%f\n", j);

    int l = 11;
    float m = 4;
    int o = l/m;  // float mein value aata agar float datatype declare krte to!
    printf("%d\n", o);  // magar hamne ise int datatype mein initialize kiya hae..
    
    return 0;
}