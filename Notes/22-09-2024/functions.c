#include <stdio.h>
//Function
/*
    Function with no parameter no return type
    Function with parameter but no return type
    Function with no parameter but return type
    Function with parameter and return type
*/
 // int <- return type main <- function name () <- parameter fields {/code block}

 //Initiliaze the function
 void greet();
int main(){
    //call function
    greet();
    return 0;
}
//Declare the greet() function!
void greet(){
    printf("Good, Afternoon!");
}