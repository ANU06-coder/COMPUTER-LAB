#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int coin_toss = rand() % 2;

    if (coin_toss == 1) {
        printf("The coin landed on Heads!\n");
    }
    else {
        printf("The coin landed on Tails!\n");
    }

    return 0;
}