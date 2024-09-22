/*1. Documentation Section (optional)
Author: Yukesh Tamang
Date: 12/09/2024
Description: Car Renting Eligible Checker
Version: 1.0
*/

#include <stdio.h>

int main() {
    int age;
    char license;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a valid driving license? (Y/N): ");
    scanf(" %c", &license);

    if (age >= 21 && (license == 'Y' || license == 'y')) {
        printf("You can rent a car.\n");
    } else {
        printf("You cannot rent a car.\n");
    }

    return 0;
}