#include <stdio.h>
#include <math.h>

int main(){
    int x , count = 0;
    printf("Enter any number (positive): ");
    scanf("%d",&x);
    int sqv = ceil(sqrt(x));
    for(int i = 2;i <= sqv;i++){
        if(x%i==0){
            count = 1;
            break;
        }
    }
    if((count == 0 && x != 1) || x == 2 || x == 3){
        printf("%d is a prime number",x);
    } else {
        printf("%d is not a prime number",x);
    }
    return 0;
}