/*
Quick Quiz: Write a program to find grade of a student given his marks based on below:
    90 – 100 => A
    80 – 90  => B
    70 – 80  => C
    60 – 70  => D
    50 – 60  => E
    <50      => F
*/

#include <stdio.h>

int main() {
    int a;
    printf("Enter the marks: ");
    scanf("%d", &a);

    if (a>90 && a<=100)
    {
        printf("Voila! You're Astonishing!\n");
    }
    else if (a>80 && a<=90)
    {
        printf("You scored good marks! You got B.\n");
    }
    else if (a>70 && a<=80)
    {
        printf("Not Bad but could've been Better. You got C.\n");
    }
    else if (a>60 && a<=70)
    {
        printf("Average. Work Hard, you've got D.\n");
    }
    else if (a>50 && a<=60)
    {
        printf("Do hard work! You've got E.\n");
    }
    else if (a<=50)
    {
        printf("Believe in Yourself! You can achieve highest feats. in the world. Do hard work!\n");
    }
    else
    {
        printf("Please enter marks from 0 to 100!\n");
    }
    
    return 0;
}