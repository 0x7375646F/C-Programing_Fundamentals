/*1. 
Author: Yukesh Tamang
Date: 12/09/2024
Description: Voting Eligible Checker
Version: 1.0
*/
#include <stdio.h>
 
int main() {
    int age;
    char country[50]; // creating a array for storing country 
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your country: ");
    scanf("%s", country);

    if (age >= 18) {
        printf("You are eligible to vote in %s.\n", country);
    } else {
        printf("You are not eligible to vote in %s. You must be at least 18 years old.\n", country);
    }

    return 0;
}