/*1. Documentation Section (optional)
Author: Yukesh Tamang
Date: 12/09/2024
Description: Logical Operator
Version: 1.0
*/
#include <stdio.h>

int main(){
    int a = 20;
    int b = 15;
    /*
        Logical Operators
        &&(AND), ||(OR), !(NOT)
    */
    int result = a > b && a < b;
    int result1 = a > b || a < b;
    int result2 = !(a > b);
    printf("a: %d | b: %d\n",a,b);
    printf("a is greater than b and a is less than b: %d\n",result);
    printf("a is greater than b or a is less than b: %d\n",result1);
    printf("a is not greater than b: %d\n",result2);

    return 0;
}