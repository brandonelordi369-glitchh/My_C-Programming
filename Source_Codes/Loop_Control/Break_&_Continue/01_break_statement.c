#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break; // exit the loop now..
        }
        printf("%d\n", i);
    }
    return 0;
}