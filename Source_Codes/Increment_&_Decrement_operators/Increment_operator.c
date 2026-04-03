#include <stdio.h>

int main()
{
    int a = 0;
    printf("%d\n", a);
    a++;
    printf("%d\n", a);

    printf("%d\n", ++a);
    printf("%d\n", a++);

    printf("%d\n", a);

    return 0;
}

// a++ => prints 'a' first, then increments.. (Post Increment Operator)
// ++a => increments first, then prints 'a'.. (Pre Increment Operator)
