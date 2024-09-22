/*
Author: Yukesh Tamang
Date: 05/09/2024
Description: Celsius to Fahrenheit Converter HEHE!
Version: 1.0
*/
#include <stdio.h>

int main(){
    float Fahrenheit,Celsius; //defining float variables because we can get a decimal values from user!
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&Celsius); //using format specifier %f because we are expecting float input!
    Fahrenheit = Celsius * 1.8 + 32;
    printf("Temperature in Fahrenheit is: %f",Fahrenheit);
    printf("Temperature in Fahrenheit is: %.2f",Fahrenheit);
    // we can define how precise we want by modifying .2f, .digit of precision we want!
    return 0;

}