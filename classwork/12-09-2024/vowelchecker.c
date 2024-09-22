/*1. Documentation Section (optional)
Author: Yukesh Tamang
Date: 12/09/2024
Description: Vowel Checker
Version: 1.0
*/
#include <stdio.h>

int main(){
    char v; 
    printf("Enter a letter: ");
    scanf("%c",&v);

    if(v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u'){
        printf("%c is a vowel",v);
    }
    else if(v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U'){
        printf("%c is a vowel",v);
    }
    else{
        printf("%c is not a vowel",v);
    }
    return 0;
}