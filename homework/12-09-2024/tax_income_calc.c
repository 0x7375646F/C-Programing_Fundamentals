/*1. 
Author: Yukesh Tamang
Date: 12/09/2024
Description: Tax Income Calculator 
Version: 1.0
*/
#include <stdio.h>

int main() {
    float annual_income, tax;

    // Get the annual income from the user
    printf("Enter your annual income: ");
    scanf("%f", &annual_income);

    // Calculate tax based on annual income
    if (annual_income <= 10000) {
        tax = 0;
    } else if (annual_income <= 50000) {
        tax = annual_income * 0.10;
    } else if (annual_income <= 100000) {
        tax = annual_income * 0.20;
    } else {
        tax = annual_income * 0.30;
    }

    // Print the tax amount
    printf("Your tax amount is: %.2f\n", tax);

    return 0;
}