/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main() {
    float total_subjects = 3;
    float maths, cs, english;
    
    printf("Enter the marks of Maths: ");
    scanf("%f", &maths);
    printf("Enter the marks of CS: ");
    scanf("%f", &cs);
    printf("Enter the marks of English: ");
    scanf("%f", &english);
    

    float total_percentage = ((maths + cs + english)/total_subjects);

    if (maths<33 || cs<33 || english<33)
        printf("I'm Sorry\\ You've failed!");
    
    else {
        if (total_percentage>=40)
        {
            printf("Voila! You've passed.\n");
        }
        else
        {
            printf("I'm Sorry\\ You've failed!");
        }
    }
    
    return 0;
}