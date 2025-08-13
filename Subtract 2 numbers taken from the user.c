#include <stdio.h>

int main() {
    int x, y;
    printf("enter first number: ");
    scanf("%d", &x);

    printf("enter second number: ");
    scanf("%d", &y);

    printf("The result is: %d", x - y);
    return 0;
}