#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");

    int Max_Limit = 10000; 
    int Amount;
    char country[30] = "Pakistan";
    char country2[30] = "UAE";
    char selectedCountry[30];
    int hour, num_Of_Transactions = 0; 
    int Flag = 0;  
    int choice;

    printf("Select your country:\n");
    printf("1. Pakistan\n");
    printf("2. UAE\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Country selected PAKISTAN\n");
            break;

        case 2:
            printf("Country selected UAE\n");
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("Enter current hour (0-23): ");
    scanf("%d", &hour);
    if (hour > 20) {   
        printf("Transactions are not allowed after 8 pm.\n");
        return 0;
    }

    printf("Enter the total amount: ");
    scanf("%d", &Amount);

    while (Amount < Max_Limit && Flag == 0) {
        Max_Limit = Max_Limit - Amount;
        num_Of_Transactions = num_Of_Transactions + 1;   
        printf("Your Transaction is successful");
        printf("You still have %d limit left\n", Max_Limit);

        
        if (num_Of_Transactions >= 3) {
            printf("You have reached the maximum number of transactions allowed (3)\n");
            break;  
        }

        printf("If you want to exit just type 1 (otherwise type 0): ");
        scanf("%d", &Flag);  
        if (Flag == 0){
            printf("Enter next amount: ");
            scanf("%d", &Amount);
        }
    }

    if (Amount >= Max_Limit) {
        if (Amount == Max_Limit){
            printf("Your transaction is successful but you dont have any limit left\n");
        }
        else{
            printf("You have reached your daily limit!!!\n");
        } 
    }
    else if (Flag == 1) {
        printf("THANK YOU FOR USING!!\n");
    }

    return 0;
}