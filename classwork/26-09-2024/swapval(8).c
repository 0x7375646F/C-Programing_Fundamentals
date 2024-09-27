#include <stdio.h>

void swap(int *a, int *b, int *c){
    *a = *a + *b + *c; // 10 + 20 + 30 = 60
    *b = *a - *b - *c; // 60 - 20 - 30 = 10
    *c = *a - *b - *c; // 60 - 10 - 30 = 20
    *a = *a - *b - *c; // 60 - 10 - 20 = 30
}
int main(){
    int a = 10, b = 20, c = 30;
    printf("a = %d | b = %d | c = %d\n",a,b,c);
    swap(&a,&b,&c);
    printf("a = %d | b = %d | c = %d\n",a,b,c);
    return 0;
}