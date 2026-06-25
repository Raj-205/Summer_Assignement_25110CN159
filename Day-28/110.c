#include <stdio.h>
#include <string.h>
int main() 
{
    int accNo[100];
    char name[100][100];
    float balance[100];
    int count = 0;
    int choice, acc, found;
    float amount;
    printf("\n Bank Account System \n");
    while (1) 
    {
        printf("1. Add Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &accNo[count]);
                printf("Enter Name: ");
                scanf("%s", name[count]);
                balance[count] = 0.0;
                count++;
                printf("Account created successfully!\n");
                break;
            case 2:
                for (int i = 0; i < count; i++) 
                {
                    printf("\nAccount %d:\n", i + 1);
                    printf("Acc No: %d\n", accNo[i]);
                    printf("Name: %s\n", name[i]);
                    printf("Balance: %.2f\n", balance[i]);
                }
                break;
            case 3:
                printf("Enter Account Number: ");
                scanf("%d", &acc);
                found = 0;
                for (int i = 0; i < count; i++) 
                {
                    if (accNo[i] == acc) 
                    {
                        printf("Enter amount to deposit: ");
                        scanf("%f", &amount);
                        if (amount > 0) 
                        {
                            balance[i] += amount;
                            printf("Deposited %.2f successfully!\n", amount);
                        } 
                        else 
                        {
                            printf("Invalid amount.\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if (!found) 
                printf("Account not found.\n");
                break;
            case 4:
                printf("Enter Account Number: ");
                scanf("%d", &acc);
                found = 0;
                for (int i = 0; i < count; i++) 
                {
                    if (accNo[i] == acc) 
                    {
                        printf("Enter amount to withdraw: ");
                        scanf("%f", &amount);
                        if (amount > 0 && amount <= balance[i]) 
                        {
                            balance[i] -= amount;
                            printf("Withdrawn %.2f successfully!\n", amount);
                        } else {
                            printf("Insufficient balance or invalid amount.\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Account not found.\n");
                break;
            case 5:
                return 0;
                break;
        }

    }
    return 0;
}
