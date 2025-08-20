#include <stdio.h>

int main() {
    
    float fa,ce;
    printf("Enter fahrenheit: ");
    scanf("%f",&fa);
    printf("%f C\n",(fa-32)*5/9);
    printf("Enter celsius: ");
    scanf("%f",&ce);
    printf("%f F",(1.8*ce)+32.0);
    return 0;
}