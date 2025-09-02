#include <stdio.h>
#include <math.h>   // for floor() and ceil()

int main() {
    double num, floorValue, ceilValue;

    // Input number
    printf("Enter a number (positive or negative): ");
    scanf("%lf", &num);

    // Calculate floor and ceiling
    floorValue = floor(num);
    ceilValue = ceil(num);

    // Output
    printf("\nNumber: %.2lf\n", num);
    printf("Floor value: %.2lf\n", floorValue);
    printf("Ceiling value: %.2lf\n", ceilValue);

    return 0;
}