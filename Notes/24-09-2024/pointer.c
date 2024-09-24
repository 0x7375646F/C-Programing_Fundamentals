#include <stdio.h>
void addone(int *val);
int main(){
    int a = 10;
    // int *ptr = &a;
    printf("variable before changing: %d\n",a);
    // printf("%d\n",*ptr);
    //changing the variable data through function!
    //call by reference
    addone(&a);
    printf("variable after changing: %d\n",a);
}

void addone(int *val){
    *val +=1;
    return;
}