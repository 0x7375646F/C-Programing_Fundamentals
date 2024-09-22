/*
Author: Yukesh Tamang
Date: 05/09/2024
Description: Operators!
Version: 1.0
*/
#include <stdio.h>
int main(){
    int a = 20;
    int b = 10;
    //Airthmetic Operators
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d\n",a,b,a%b);
    printf("%d * %d = %d\n",a,b,a*b);

    //Assignment operator (op=)
    int c = 10;
    c += 5;// increases the variable by 5
    printf("Value of c = %d\n",c);
    c -= 5;// decreases the variable by 5
    printf("Value of c = %d\n",c);
    c *= 5;// multiply the variable by 5
    printf("Value of c = %d\n",c);  
    c /= 5;// divide the variable by 5
    printf("Value of c = %d\n",c);  
    c %=5;// modulus the variable by 5
    printf("Value of c = %d\n",c);   
    
    //Unary Operator
    int d = 10;
    d++; //increases the variable by 1 
    printf("Value of d = %d\n",d);
    d--; //decreases the variable by 1
    printf("Value of d = %d\n",d);
    return 0;
}