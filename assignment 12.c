#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    double principal;
    double rate;
    double time;
    int frequency;
    double amount;
    double compoundInterest;
    printf("Enter Principal Amount: ");
    scanf("%lf", &principal);

    printf("Enter Annual Interest Rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter Time Period (in years): ");
    scanf("%lf", &time);

    printf("Enter Compounding Frequency (e.g., 1 for Annually, 2 for Semi-Annually, 4 for Quarterly, 12 for Monthly, 365 for Daily): ");
    scanf("%d", &frequency);
    rate = rate / 100.0;
    amount = principal * pow((1 + (rate / frequency)), (frequency * time));
    compoundInterest = amount - principal;
    printf("\nFinal Amount: %.2lf\n", amount);
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}