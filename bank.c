#include <stdio.h>

float deposit(float balance) {
    float amount;
    do
    {
        printf("Enter amount to deposit: $");
        scanf("%f", &amount);
        if(amount < 0 ){
            printf("Enter Valid Amount\n");
        }
        else{
            balance += amount;
            printf("Successfully deposited $%.2f\n", amount);
        }
    } while (amount < 0);
    
    return balance;
}

float withdraw(float balance) {
    float amount;
    do
    {
        printf("Enter amount to withdraw: $");
        scanf("%f", &amount);
        if(amount < 0 ){
            printf("Enter Valid Amount\n");
        }
        else if(amount > balance){
            printf("Insufficient Balance\n");
        }
        else{
            balance -= amount;
            printf("Successfully withdrew $%.2f\n", amount);
        }
    } while (amount < 0 || amount > balance);
    
    return balance;
}

int main() {
    float balance = 0.0f;
    int choice;
    
    do{
        printf("\n----- Bank Menu -----\n");
        printf("Choose an Operation:\n");
        printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Your current balance is: $%.2f\n", balance);
            break;
        
        case 2:
            balance = deposit(balance);
            break;

        case 3:
            balance = withdraw(balance);
            break;

        case 4:
            printf("Thank you for using the bank !\n");
            break;

        default:
            printf("\nInvalid input! Please try again.\n");
            break;
        }
    } while (choice != 4);
    
    return 0;
}
    