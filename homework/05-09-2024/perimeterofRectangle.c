/*
Author: Yukesh Tamang
Date: 05/09/2024
Description: Calculate perimeter of Rectangle!
Version: 1.0
*/
#include <stdio.h>

int main() {
    int length, breadth, perimeter;

    // Input length and breadth
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter breadth: ");
    scanf("%d", &breadth);

    // Calculate perimeter
    perimeter = 2 * (length + breadth);

    // Print result
    printf("Perimeter of rectangle: %d\n", perimeter);

    return 0;
}