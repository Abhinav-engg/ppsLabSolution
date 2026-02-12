#include <stdio.h>
int main(){
    float principal, rate, time, simpleInterest, compoundInterest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate compound interest
    compoundInterest = principal * (1 + rate / 100) * (1 + rate / 100) * (1 + rate / 100) - principal;

    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;

}