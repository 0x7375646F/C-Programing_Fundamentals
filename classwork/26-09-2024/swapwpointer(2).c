#include <stdio.h>
void swap(int *a, int *b);
int main(){
    int a = 10, b = 20;
    int *pa = &a;
    int *pb = &b;
    printf("a: %d | b: %d\n",a,b);
    swap(pa,pb);
    printf("a: %d | b: %d\n",a,b);
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}