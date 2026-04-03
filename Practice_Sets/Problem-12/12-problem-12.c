/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (islower(ch))
    {
        printf("Yes, the character is in lowercase.\n");
    }
    else
    {
        printf("No, the character is Not in lowercase.\n");
    }
    
    return 0;
}