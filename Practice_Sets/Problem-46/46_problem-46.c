// Write a program to check whether a given character is present in a string or not.

#include <stdio.h>

int main()
{
    char st[] = "Haamiid";
    char o = 'a';
    int found = 0;

    for (int i = 0; st[i] != '\0'; i++)
    {
        if (o == st[i])
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Present.\n");
    }
    else
    {
        printf("Not present.\n");
    }

    return 0;
}