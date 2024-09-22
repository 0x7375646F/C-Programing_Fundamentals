/*
Author: Yukesh Tamang
Date: 05/09/2024
Description: Calculate average marks of 5 subjects!
Version: 1.0
*/
#include <stdio.h>

int main() {
    // Define variables
    int sub1, sub2, sub3, sub4, sub5;
    float average, percentage, total;

    // Input marks of 5 subjects
    printf("Enter marks of Subject 1: ");
    scanf("%d", &sub1);
    printf("Enter marks of Subject 2: ");
    scanf("%d", &sub2);
    printf("Enter marks of Subject 3: ");
    scanf("%d", &sub3);
    printf("Enter marks of Subject 4: ");
    scanf("%d", &sub4);
    printf("Enter marks of Subject 5: ");
    scanf("%d", &sub5);

    // Calculate total marks
    total = sub1 + sub2 + sub3 + sub4 + sub5;

    // Calculate average
    average = total / 5;

    // Calculate percentage (assuming maximum marks is 100)
    percentage = total / 500 * 100;

    // Display results
    printf("Total Marks: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}