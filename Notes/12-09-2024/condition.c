/*1. Documentation Section (optional)
Author: Yukesh Tamang
Date: 12/09/2024
Description: Conditional Operator (IF / ELSE)
Version: 1.0
*/
#include <stdio.h>
int main(){
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    /*
        Check odd or even
    */
    if(a%2==0){
        printf("Number is even\n");
    }
    else{
        printf("Number is odd\n");
    }
    return 0;
}