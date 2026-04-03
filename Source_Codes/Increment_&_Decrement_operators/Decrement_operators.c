#include <stdio.h>

int main()
{
    int a = 10;
    printf("%d\n", a);
    a--;
    printf("%d\n", a);

    printf("%d\n", --a);
    printf("%d\n", a--);

    printf("%d\n", a);

    return 0;
}

// a-- => prints 'a' first, then decrements.. (Post decrement Operator)
// --a => decrements first, then prints 'a'.. (Pre decrement Operator)
