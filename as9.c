#include <stdio.h>

int main() {
    
    int a,b,c;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    printf("before swapping: %d,%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping: %d,%d",a,b);
    

    return 0;
}