#include <stdio.h>

int main() {
    
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    printf("before swapping: %d,%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping: %d,%d",a,b);
    

    return 0;
}