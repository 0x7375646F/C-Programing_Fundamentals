#include <stdio.h>

int main(){
    int arr1[5] = {1,2,3,4,5}, arr2[5] = {1,2,3,4,5}, arr3[5];
    printf("Adding arr1 & arr2 & storing it in arr3:\n");
    for(int i = 0;i<5;i++){
        arr3[i] = arr1[i] + arr2[i];
        printf("%d ",arr3[i]);
    }
}