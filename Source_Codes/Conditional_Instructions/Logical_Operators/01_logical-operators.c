/*
&&, || and !, are three logical operators in C. These are read as “AND”, “OR” and “NOT”
They are used to provide logic to our C programs.
*/

#include <stdio.h>

int main() {
    printf("'1' means 'True', '0' means 'False'..\n\n");

    // 1 AND 0
    printf("The value of %d and %d is: %d\n", 1, 0, 1&&0);
    // 0 AND 0
    printf("The value of %d and %d is: %d\n", 0, 0, 0&&0);
    // 1 AND 1
    printf("The value of %d and %d is: %d\n", 1, 1, 1&&1);

    // 1 OR 0
    printf("The value of %d or %d is: %d", 1, 0, 1||0);
    // 0 OR 0
    printf("The value of %d or %d is: %d\n", 0, 0, 0||0);
    // 1 OR 1
    printf("The value of %d or %d is: %d\n", 1, 1, 1||1);
    
    // !(NOT)
    printf("The value of Not-of %d is: %d\n", 1, !1);
    printf("The value of Not-of %d is: %d\n", 0, !0);
    printf("The value of Not-of %d is: %d\n", (3==3), !(3==3));
    printf("The value of Not-of %d is: %d\n", (1!=5), !(1!=5));
    
    return 0;
}