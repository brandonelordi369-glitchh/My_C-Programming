//  Note:
//      1. Once a string is defined using char st [] = “Anshuman”, it cannot be reinitialized to
//          something else.
//      2. A string defined using pointers can be reinitialized.

#include <stdio.h>
#include <string.h>

int main()
{
    char *ptr = "Anshuman";
    printf("%s \n", ptr);

    ptr = "Karna";
    printf("%s \n", ptr);

    return 0;
}