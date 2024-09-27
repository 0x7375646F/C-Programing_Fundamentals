#include <stdio.h>

int main(){
    int n, r, q, result = 0, count=0,mul = 1, tempcount;
    printf("Enter the number: ");
    scanf("%d",&n);
    //counting number of digits
    q = n;
    while(q != 0){
        q = q/10;
        count++;
    }
    //calculating armstrong number
    tempcount = count;
    //reinitialize quotient
    q = n;
    while(q != 0){
        //get the last digit of the number
        r = q%10;
        //multiply the number with the number of digits
        while(tempcount != 0){
            mul = mul * r;
            tempcount--;
        }
        result = result + mul;
        //reset the counter
        tempcount = count;
        //remove last digit form the number
        q = q/10;
        //reinitialize mul
        mul = 1;
    }
    if(result == n){
        printf("It is a armstrong number!");
    } else {
        printf("It is not a armstrong number!");
    }
    return 0;
}


