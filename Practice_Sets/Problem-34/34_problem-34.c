#include <stdio.h>

int v10x(int a);

int v10x(int a)
{
    return a *= 10;
}

int main()
{
    int s = 2;
    printf("%d\n", s);
    v10x(s);
    printf("%d\n", s);
    printf("%d\n", v10x(s));
    return 0;
}
