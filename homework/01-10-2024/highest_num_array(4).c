#include <stdio.h>

int main()
{
    int arr[5] = {8,2,6,9,1};
    int highest = 0;
    for(int k = 0; k < 5; k++){
        if(arr[k] > highest){
            highest = arr[k];
        }
    }
    printf("Highest No: %d",highest);
    return 0;
}