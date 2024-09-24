#include <stdio.h>

void increaseSalary(int *salary);
int main(){
    int salary = 10000;
    int *ptr = &salary;
    printf("Enter Your Salary: ");
    scanf("%d", ptr);
    printf("Your Original Salary is: %d\n", *ptr);
    increaseSalary(ptr);
    printf("Your Salary is now: %d\n",*ptr);
    return 0;
}

void increaseSalary(int *salary){
    *salary *= 2;
    return;
}