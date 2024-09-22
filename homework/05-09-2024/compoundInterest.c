
/*
Author: Yukesh Tamang
Date: 05/09/2024
Description: Calculate compound interest!
Version: 1.0
*/

#include <stdio.h>
#include <math.h> // new library :D to import pow function.

int main() {
    float principal, rate, time, ci;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percent): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    ci = principal * pow((1 + rate/100), time) - principal;

    printf("The compound interest is: %.2f\n", ci);

    return 0;
}