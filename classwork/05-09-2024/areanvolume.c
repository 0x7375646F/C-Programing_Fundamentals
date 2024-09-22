/*
Author: Yukesh Tamang
Date: 05/09/2024
Description: Simple area and volume calculator!
Version: 1.0
*/
#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, height;

    // Get user input for radius and height
    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("Enter the height: ");
    scanf("%f", &height);

    // Calculate area of circle
    float area = PI * (radius * radius);

    // Calculate volume of cylinder
    float volume = PI * (radius * radius) * height;

    // Print results
    printf("Area of Circle: %.2f\n", area);
    printf("Volume of Cylinder: %.2f\n", volume);

    return 0;
}