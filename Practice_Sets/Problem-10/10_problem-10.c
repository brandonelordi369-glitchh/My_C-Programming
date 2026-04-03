/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:

    Income Slab     Tax
    2.5L – 5.0L      5%
    5.0L - 10.0L    20%
    Above 10.0L     30%

Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

// #include <stdio.h>

// int main(){
//     float income, tax=0;
//     printf("Enter your income in lacs: ");
//     scanf("%f", &income);

//     if (income>=2.5 && income<=5.0) 
//     {
//         tax = 0.05 * income;
//     }
    
//     else if (income>5.0 && income<=10.0) 
//     {
//         tax = 0.2 * income;
//     }
    
//     else if (income>10.0) 
//     {
//         tax = 0.3 * income;
//     }

//     else 
//     {
//         tax = 0;
//     }
    
//     printf("The total tax you need to pay is: %f \n", tax);

//     return 0;
// }

// The above code was wrong in calculations...

// the below one is prepared after consulting chatgpt..

#include <stdio.h>

int main() {
    float income, tax = 0;

    printf("Enter your income in lacs: ");
    scanf("%f", &income);

    if (income > 10.0) {
        tax += (income - 10.0) * 0.30;
        income = 10.0;
    }

    if (income > 5.0) {
        tax += (income - 5.0) * 0.20;
        income = 5.0;
    }

    if (income > 2.5) {
        tax += (income - 2.5) * 0.05;
    }

    printf("The total tax you need to pay is: %.3f lacs\n", tax);

    return 0;
}
// for more info, visit:
// https://chatgpt.com/g/g-p-6968a4ed30a48191bf7b19ee670fa1bd-c-programming-in-my-arch-hyprland-systemd-zsh/c/69725fe1-2534-8322-9238-a4a7e35c76af
