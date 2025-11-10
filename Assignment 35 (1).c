#include <stdio.h>

int main() {
    int lower, upper, i, j, flag;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for(i = lower; i <= upper; i++) {
        if(i < 2)
            continue; // Skip numbers less than 2

        flag = 0; // assume prime

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 1; // not prime
                break;
            }
        }

        if(flag == 0)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}