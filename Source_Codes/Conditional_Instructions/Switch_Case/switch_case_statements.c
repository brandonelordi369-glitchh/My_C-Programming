/*
switch-case is used when we have to make a choice between number of 
alternatives for a given variable.
*/

#include <stdio.h>

int main() {
    int a;
    printf("Enter the value of a from range 1 to 7: ");
    scanf("%d", &a);

    switch (a)
    {
        case 1:
            printf("you have entered one.\n");
            break;

        case 2:
            printf("you've entered two.\n");
            break;
        
        case 3:
            printf("you've entered three.\n");
            break;
        
        case 4:
            printf("you've entered two.\n");
            break;
        
        case 5:
            printf("you've entered two.\n");
            break;
        
        case 6:
            printf("you've entered two.\n");
            break;

        case 7:
            printf("you've entered two.\n");
            break;

        default:
            printf("nothng matched!");
            break;
                    
    }
}