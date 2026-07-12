#include <stdio.h>
#include <string.h>

int main()
{
    // char st[] = {'P', 'y', 't', 'h', 'o', 'n', '\0'};
    char st[] = "Python"; // same as above.
    for (int i = 0; i < 7; i++)
    {
        printf("%c \n", st[i]);
    }

    printf("%s \n", st);

    return 0;
}