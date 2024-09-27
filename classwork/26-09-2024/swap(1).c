#include <stdio.h>

int main(){
    int a = 10, b = 20;
    printf("a: %d | b: %d\n",a,b);
    int temp = a;
    a = b;
    b = temp;
    printf("a: %d | b: %d\n",a,b);
    return 0;
}