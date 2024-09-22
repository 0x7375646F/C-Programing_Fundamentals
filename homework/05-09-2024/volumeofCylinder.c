/*
Author: Yukesh Tamang
Date: 05/09/2024
Description: Calculate volume of cylinder!
Version: 1.0
*/

#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, height, volume;

    // Input radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume
    volume = PI * (radius * radius) * height;

    // Print result
    printf("The volume of the cylinder is: %.2f\n", volume);

    return 0;
}