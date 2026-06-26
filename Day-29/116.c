#include <stdio.h>
#include <string.h>
int main() 
{
    int id[100], quantity[100];
    float price[100];
    char name[100][50];
    int count = 0, choice, i, j, found, tempId;
    char tempName[50];
    while (1) 
    {
        printf("\tInventory Management System \n");
        printf("Enter choice:\n1. Add Item\n2. Display Items\n3. Update Item\n4. Remove Item\n5. Search Item\n6. Exit\n");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                if (count < 100) 
                {
                    printf("Enter ID: ");
                    scanf("%d", &id[count]);
                    printf("Enter Name: ");
                    scanf("%s", name[count]);
                    printf("Enter Quantity: ");
                    scanf("%d", &quantity[count]);
                    printf("Enter Price: ");
                    scanf("%f", &price[count]);
                    count++;
                }
                 else 
                {
                    printf("Inventory full\n");
                }
                break;
            case 2:
                printf("\nID\tName\tQuantity\tPrice\n");
                for (i = 0; i < count; i++) 
                {
                    printf("%d\t%s\t%d\t\t%.2f\n", id[i], name[i], quantity[i], price[i]);
                }
                break;
            case 3:
                printf("Enter ID to update: ");
                scanf("%d", &tempId);
                found = 0;
                for (i = 0; i < count; i++) 
                {
                    if (id[i] == tempId) 
                    {
                        found = 1;
                        printf("Enter new Quantity: ");
                        scanf("%d", &quantity[i]);
                        printf("Enter new Price: ");
                        scanf("%f", &price[i]);
                        break;
                    }
                }
                if (!found) 
                printf("Item not found\n");
                break;
            case 4:
                printf("Enter ID to remove: ");
                scanf("%d", &tempId);
                found = 0;
                for (i = 0; i < count; i++) 
                {
                    if (id[i] == tempId) 
                    {
                        found = 1;
                        for (j = i; j < count - 1; j++) 
                        {
                            id[j] = id[j + 1];
                            strcpy(name[j], name[j + 1]);
                            quantity[j] = quantity[j + 1];
                            price[j] = price[j + 1];
                        }
                        count--;
                        break;
                    }
                }
                if (!found) 
                printf("Item not found\n");
                break;
            case 5:
                printf("Enter Name to search: ");
                scanf("%s", tempName);
                found = 0;
                for (i = 0; i < count; i++) 
                {
                    if (strcmp(name[i], tempName) == 0) 
                    {
                        found = 1;
                        printf("Found: ID=%d Name=%s Quantity=%d Price=%.2f\n",
                               id[i], name[i], quantity[i], price[i]);
                        break;
                    }
                }
                if (!found) printf("Item not found\n");
                break;
            case 6:
                return 0;
        }
    }
    return 0;
}
