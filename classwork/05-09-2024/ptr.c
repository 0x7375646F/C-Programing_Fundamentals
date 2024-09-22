/*
Author: Yukesh Tamang
Date: 05/09/2024
Description: Simple Interest Calculator HEHE!
Version: 1.0
*/
#include <stdio.h>

int main() {
    float principle, year, rate, interest;

    // Input values
    printf("Enter the principle: ");
    scanf("%f", &principle);
    printf("Enter the number of years: ");
    scanf("%f", &year);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    // Calculate simple interest
    interest = (principle * year * rate) / 100;

    // Output the result
    printf("Principle: %f\n", principle);
    printf("Years: %f\n", year);
    printf("Rate: %f%%\n", rate);
    printf("Simple Interest: %f\n", interest);

    return 0;
}