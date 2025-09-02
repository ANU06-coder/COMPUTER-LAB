#include <stdio.h>

int main() {
    int number;
    int lastDigitModulus;
    int lastDigitWithoutModulus;

    printf("Enter an integer: ");
    scanf("%d", &number);
lastDigitModulus = number % 10;
    printf("Last digit (using modulus operator): %d\n", lastDigitModulus);
lastDigitWithoutModulus = number - (number / 10) * 10;
    printf("Last digit (without using modulus operator): %d\n", lastDigitWithoutModulus);

    return 0;
}


