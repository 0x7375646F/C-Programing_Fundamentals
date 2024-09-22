/*
Author: Yukesh Tamang
Date: 05/09/2024
Description: Introduction To Variables!
Version: 1.0
*/

#include <stdio.h>

int main(){
    /*
        # RULES FOR DECLARATION OF VARIABLES:
        1. Variable name shouldn't be started with a number.
        2. Variable name can't contain a special character except (_).
        3. Variables name can't be duplicated!
        4. Variable name is case sensitive.
        5. Variables name can't contain any spaces.
    */
    int a; // variable declaration
    a = 50; // variable initialization
    int b = 20; // variable delcaration and initialization

    //Common Varaible Types: (Data Types) -:
        int c = 6;
        float d = 9.6;
        char e = 'A';
    
    printf("A: %d, B: %d, E: %c, D: %f", a,b,e,d);
        //      ^             ^------^-------- format specifier for character
        //      '--- format specifier| for integer
        //                           '-------------format specifier for float
}