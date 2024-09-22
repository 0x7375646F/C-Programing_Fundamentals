#include <stdio.h>
#include <stdlib.h>
int main(){
    int options;
    long long int userBalance = 10000; //long long int to store bigger numbers
    long long int Fund;
    printf("Welcome To XYZ Banking System!\n");
    while(1){
    printf("1. Add Funds\n2. Withdraw\n3. CheckBalance\n4. Exit\n");
    printf("Choose any options from 1-4: ");
    scanf("%d",&options);
    system("cls");
    switch(options){
        case 1:
            printf("How Many Funds Do You Like to Deposit?\n");
            printf("> ");
            scanf("%lld",&Fund);
            if(Fund < 0){
                printf("Invalid Input!\n");
                continue;
            }
            userBalance += Fund;
            printf("Succesfully Deposited: %lld\n",Fund);
            printf("Your Balance has been updated to: %lld\n",userBalance);
            continue;
        case 2:
            
            printf("How Many Funds Do You Like to Withdraw?\n");
            printf("> ");
            scanf("%lld",&Fund);
            
            if(Fund > userBalance || Fund < 0){
                printf("Insufficient Funds!\n");
                continue;
            }
            userBalance -= Fund;
            printf("Succesfully withdrawed: %lld\n",Fund);
            printf("Your Balance has been updated to: %lld\n",userBalance);
            continue;
        case 3:
            printf("Your Current Balance is: %lld\n",userBalance);
            continue;
        case 4:
            printf("Closing Banking System...\n");
            return 0;
        default:
            printf("Invalid Option!");
            return 0;
    }
    }
}