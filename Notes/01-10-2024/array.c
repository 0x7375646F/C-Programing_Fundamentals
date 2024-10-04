#include <stdio.h>

int main(){
    int a[5] = {5,4,50,2,1};
    // printf("value in index 0: %d\n",a[0]);
    // printf("value in index 1: %d\n",a[1]);
    // printf("value in index 2: %d\n",a[2]);
    // printf("value in index 3: %d\n",a[3]);
    // printf("value in index 4: %d\n",a[4]);
    for(int i = 0; i < 5; i++){
        printf("value in index %d: %d\n",i,a[i]);
    }
    return 0;
}