/*
Author: Yukesh Tamang
Date: 12/09/2024
Description: BMI Classification!
Version: 1.0
*/
#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight and height from user
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate the bmi :D
    bmi = weight / (height * height);
    
    // Classify weight status based on BMI
    if (bmi < 18.5) {
        printf("Your weight status is: Underweight\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Your weight status is: Normal weight\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("Your weight status is: Overweight\n");
    } else {
        printf("Your weight status is: Obese\n");
    }

    return 0;
}