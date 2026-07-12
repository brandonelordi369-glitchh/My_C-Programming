// Write a program to count the occurrence of a given character in a string.

#include <stdio.h>

int main()
{
    char st[] = "Haamiid";
    char o = 'a';

    int count = 0;
    for (int i = 0; i < sizeof(st); i++)
    {
        if (o == st[i])
        {
            count++;
        }
    }
    printf("%d \n", count);

    return 0;
}