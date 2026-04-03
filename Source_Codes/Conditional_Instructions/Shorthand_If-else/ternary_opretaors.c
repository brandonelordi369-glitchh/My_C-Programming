// A shorthand "if - else" can be written using the conditional or ternary operators..

/*
condition ? expression-if-true : expression-if-false
// Here "?" and ":" are called Ternary Operators

*/

#include <stdio.h>

int main() {
    int a = 1, b = 9;

    if (a > b)
    {
        printf("a is greater.\n");
    }
    
    else {
        printf("b is greater.\n\n");
    }

    // this same can be written as..
    (a > b) ? printf("b is Lesser.\n") : printf("a is Lesser.\n");
    
    return 0;
}