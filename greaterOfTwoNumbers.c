#include <stdio.h>
int main(){
    int a, b, c;
    int greatest;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    greatest = a;
    if (b > greatest) {
        greatest = b;
    }
    if (c > greatest) {
        greatest = c;
    }

    printf("Greatest number is: %d\n", greatest);
    return 0;
}
