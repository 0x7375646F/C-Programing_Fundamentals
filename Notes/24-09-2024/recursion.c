#include <stdio.h>

void display(int a);
int main(){
    int num = 5;
    display(num);
    return 0;
}

void display(int a){
    if(a==0){
        return;
    } else {
        printf("%d\n",a);
        display(a-1);
    }
}