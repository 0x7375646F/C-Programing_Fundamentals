#include <stdio.h>

int main()
{
    int arr[5];
    int highest = 0;
    //take input
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value for %d: ",i);
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("Value of a[%d] = %d\n",j,arr[j]);
    }
    for(int k = 0; k < 5; k++){
        if(arr[k] > highest){
            highest = arr[k];
        }
    }
    printf("Highest No: %d",highest);
    return 0;
}