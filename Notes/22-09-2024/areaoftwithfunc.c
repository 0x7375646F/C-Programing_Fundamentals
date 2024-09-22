#include <stdio.h>

int area(int a,int b){
    return a*b;
}

int main(){
    printf("Length of rectangle: ");
    int length;
    scanf("%d",&length);
    printf("Breadth of rectangle: ");
    int breadth;
    scanf("%d",&breadth);
    int a = area(length,breadth);
    printf("Area of rectangle: %d",a);
    return 0;
}