#include <stdio.h>

int main()
{
    float principal, rate, time;
    float SI, CI, amount = 1;

    // Input
    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest
    SI = (principal * rate * time) / 100;

    // Compound Interest (without using math.h)
    amount = principal;
    for (int i = 0; i < time; i++)
    {
        amount = amount * (1 + rate / 100);
    }
    CI = amount - principal;

    // Output
    printf("\nSimple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);
    printf("Total Amount (CI) = %.2f\n", amount);

    return 0;
}
