#include <stdio.h>
#include <string.h>

int main()
{
    char st[30];
    fgets(st, sizeof(st), stdin);

    puts(st);

    printf("%s", st);

    return 0;
}