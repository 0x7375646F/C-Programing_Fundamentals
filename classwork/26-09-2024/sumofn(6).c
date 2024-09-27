#include <stdio.h>

int sumofn(int n){
    if(n == 1){
        return 1;
    }
    return n * sumofn(n-1);
}


int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Sum of natural numbers up to %d is %d",n,sumofn(n));
    return 0;
}
