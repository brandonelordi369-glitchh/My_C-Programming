// Write a C program to design calculator with basic operations using Switch case.

#include <stdio.h>

int main()
{
    int a = 10, b = 3;
    char opr;
    printf("Enter the opertion you want to perform (in operator symbol): \n");
    scanf("%c", &opr);

    switch (opr)
    {
    case '+':
        printf("%d\n", a + b);
        break;
    case '-':
        printf("%d\n", a - b);
        break;
    case '*':
        printf("%d\n", a * b);
        break;
    case '/':
        printf("%d\n", a / b);
        break;
    case '%':
        printf("%d\n", a % b);
        break;

    default:
        break;
    }

    return 0;
}