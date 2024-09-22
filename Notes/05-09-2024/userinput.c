/*
Author: Yukesh Tamang
Date: 10/09/2024
Description: Input Handling!
Version: 1.0
*/
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a); // scanf takes two arguments one is format specifier and one is address of the variable 
    printf("Enter second number: ");
    scanf("%d",&b);
    //                                   |------------ a+b we can also directly use the airthmetic opeartors inside the printf :D    
    printf("Sum of %d and %d is %d",a,b,a+b);
    return 0;
}