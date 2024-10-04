#include <stdio.h>

int main(){
    int arr[10] = {2,3,5,6,8,2,9,7,4,1};
    int odd = 0 ,even = 0;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Total No Of Odd: %d\nTotal No Of Even: %d\n",odd,even);
    return 0;
}