#include <stdio.h>
#include <math.h>

int main() 
{
    float principal, rate, time;
    float amount, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("Compound Interest = %.2f", compound_interest);

    return 0;
}
