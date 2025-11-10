#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    switch (units / 100) {
        case 0:
            bill = units * 5;
            break;

        case 1:
            bill = (100 * 5) + (units - 100) * 7;
            break;

        default:
            bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
            break;
    }

    printf("Electricity bill = Rs. %.2f\n", bill);
    return 0;
}