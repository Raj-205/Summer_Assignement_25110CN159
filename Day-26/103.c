#include <stdio.h>

int main() 
{
    int choice;
    float balance = 50000.0; 
    float amount;
    printf(" ATM Simulation \n");
    while (1) 
    {
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) 
                {
                    balance += amount;
                    printf("%.2f Deposited Successfully\n", amount);
                } else 
                {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("%.2f Withdrawn Successfully!\n", amount);
                } else {
                    printf("Insufficient balance or invalid amount.\n");
                }
                break;
            case 4:
                printf("Your transation is updated soon \n");
                return 0;
            default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
