#include <stdio.h>

int main(){
    int n, result=0,r,q;
    printf("Enter the number: ");
    scanf("%d",&n);
    q=n;
    while(q!=0){
        r=q%10;
        result=result*10+r;
        q=q/10;
    }
    if(result==n){
        printf("The number is palindrome!");
    } else {
        printf("The number isn't plaindrome!");
    }
}