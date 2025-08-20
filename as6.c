// WACP to calculate SI
#include <stdio.h>

int main() {
    float p,r,t;
    printf("what is the principal amount?: ");
    scanf("%f",&p);
    printf("what is the rate?: ");
    scanf("%f",&r);
    printf("what is the time (in years)?: ");
    scanf("%f",&t);
    printf("the S.I is: %f",p*r*t/100.0);
    return 0;
}