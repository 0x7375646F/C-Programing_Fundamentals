/*1. Documentation Section (optional)
Author: Yukesh Tamang
Date: 05/09/2024
Description: Introduction To C.
Version: 1.0
*/

//2. Link Section (mandatory)
#include <stdio.h>

//3. Defination Section (optional)     
//Notes: This doesn't use any memory!
#define PI 3.14

//4. Global Declaration Section (optional)
//Notes: Since this is dynamically loaded this uses the RAM.
  int          x  =  10;
//datatype variable value


//5. Main Function Section (mandatory)
int main(){
    printf("This is pie Value :D (DEFINE): %f\n",PI);
    printf("This is x value: %d\n", x);
    printf("HELLO WORLD!");
    return 0;
}

//6. User-Defined Functions (optional)
int sum(){}
int calculate(){}