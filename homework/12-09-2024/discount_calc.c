/*1. 
Author: Yukesh Tamang
Date: 12/09/2024
Description: Discount Calculator 
Version: 1.0
*/
#include <stdio.h>

int main() {
    int quantity;
    float price, totalPrice;
    //enter quantity
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    printf("Enter the price of each item: ");
    scanf("%f", &price);

    //calculate discount 
    if (quantity <= 10) {
        totalPrice = quantity * price * (1 - (5.0 / 100.0));
    } else if (quantity <= 50) {
        totalPrice = quantity * price * (1 - (10.0 / 100.0));
    } else {
        totalPrice = quantity * price * (1 - (15.0 / 100.0));
    }

    printf("Total price: %.2f\n", totalPrice);

    return 0;
}