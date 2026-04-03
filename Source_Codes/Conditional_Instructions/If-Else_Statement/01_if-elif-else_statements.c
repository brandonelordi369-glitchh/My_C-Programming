#include <stdio.h>

int main(){
    int age;

    printf("Enter you age in years: ");
    scanf("%d", &age);

    if(age > 18){
        // printf("We are inside if\n");
        printf("Your age is greater than 18 years..\n");
    }
    else if (age == 18)
    {
        printf("Your age is exactly 18 years..\n");
    }
    else if (age == 0)
    {
        printf("Hell Yeah! You ain't born..");
    }

    else{
        printf("Your age is less than 18 years..\n");
    }

    return 0;
}