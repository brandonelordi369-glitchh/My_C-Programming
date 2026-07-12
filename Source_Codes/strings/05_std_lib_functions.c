#include <stdio.h>
#include <string.h>

int main()
{
    char *ptr = "KKD";
    printf("%s \n", ptr);

    // STRLEN
    int length = strlen(ptr);
    printf("%d \n", length);

    printf("%zu \n", strlen(ptr)); // same as above.

    // STRCPY
    char target_string[29];
    printf("%s \n", target_string);

    strcpy(target_string, ptr);
    printf("%s \n", target_string);

    // STRCAT
    char another_string[] = "Entertainment";
    // strcat(ptr, another_string); // pointer wale method se nhi hoga..
    // printf("%s \n", ptr);        // ye nhi chalega..
    strcat(target_string, another_string);
    printf("%s \n", target_string);

    // STRCMP
    char s1[] = "far";
    char s2[] = "joke";

    int a = strcmp("s1", "s2");
    int b = strcmp("s2", "s1");
    int c = strcmp("Imdad", "Imdad"); // case-sensitive hae..

    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);

    return 0;
}