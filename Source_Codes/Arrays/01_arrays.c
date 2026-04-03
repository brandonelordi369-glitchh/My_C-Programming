#include <stdio.h>

int main()
{
    int marks[3]; // Reserves space to store 3 integers.

    printf("Enter the marks of the 1st subject: \n");
    scanf("%d", &marks[0]);
    printf("Enter the marks of the 2nd subject: \n");
    scanf("%d", &marks[1]);
    printf("Enter the marks of the 3rd subject: \n");
    scanf("%d", &marks[2]);

    printf("\n");
    printf("The marks are:~\n %d\n %d\n %d\n", marks[0], marks[1], marks[2]);

    return 0;
}