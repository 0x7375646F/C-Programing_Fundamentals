/*1. Documentation Section (optional)
Author: Yukesh Tamang
Date: 12/09/2024
Description: Relational Operator
Version: 1.0
*/
#include <stdio.h>

int main(){
    //Relational Operator
    //<,>,<=,>=,==,!=
    // result = 0(False) OR 1(True)
    int a = 21;
    int b = 20;
    int result = a > b; // a is greater than b
    int result1 = a < b; //b is greater than a
    int result2 = a >= b; //a is greater than or equal to b
    int result3 = a <= b; //b is greater than or equal to a
    int result4 = a == b; //a is equal to b
    int result5 = a != b; //a is not equal to b
    printf("a: %d | b: %d\n",a,b);
    printf("a is greater than b: %d\n",result);
    printf("b is greater than a: %d\n",result1);
    printf("a is greater than or equal to b: %d\n",result2);
    printf("b is greater than or equal to a: %d\n",result3);
    printf("a is equal to b: %d\n",result4);
    printf("a is not equal to b: %d\n",result5);
    return 0;
}