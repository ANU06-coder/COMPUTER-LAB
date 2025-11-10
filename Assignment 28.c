#include <stdio.h>

int main() {
    float basic, hra, ta, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if(basic > 50000)
        hra = 0.20 * basic;
    else if(basic > 30000)
        hra = 0.15 * basic;
    else
        hra = 0;  // No HRA if basic <= 30000

    ta = 0.10 * basic;
    da = 0.05 * basic;

    gross = basic + hra + ta + da;

    printf("\n--- Salary Details ---\n");
    printf("Basic Salary = %.2f\n", basic);
    printf("HRA = %.2f\n", hra);
    printf("TA = %.2f\n", ta);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}