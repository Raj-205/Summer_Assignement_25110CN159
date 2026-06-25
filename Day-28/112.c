#include <stdio.h>
#include <string.h>
int main() 
{
    char name[100][100], phone[100][20], email[100][100];
    int count = 0, choice;
    char temp[100];
    
    while (1) 
    {
        printf("\n Contact Management System \n");
        printf("1. Add Contact\n2. Display Contacts\n3. Search Contact\n4. Update Contact\n5. Delete Contact\n6. Exit\n");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter Name, Phone, Email:\n");
                scanf("%s %s %s", name[count], phone[count], email[count]);
                count++;
                printf("Contact added!\n");
                break;
            case 2:
                for (int i = 0; i < count; i++) 
                {
                    printf("\nContact %d:\n", i + 1);
                    printf("Name: %s\n", name[i]);
                    printf("Phone: %s\n", phone[i]);
                    printf("Email: %s\n", email[i]);
                }
                break;
            case 3:
                printf("Enter name to search: ");
                scanf("%s", temp);
                for (int i = 0; i < count; i++) 
                {
                    if (strcmp(name[i], temp) == 0) 
                    {
                        printf("Found Contact:\nName: %s\nPhone: %s\nEmail: %s\n", name[i], phone[i], email[i]);
                        break;
                    }
                }
                break;
            case 4:
                printf("Enter name to update: ");
                scanf("%s", temp);
                for (int i = 0; i < count; i++) 
                {
                    if (strcmp(name[i], temp) == 0) 
                    {
                        printf("Enter New Name, Phone, Email:\n");
                        scanf("%s %s %s", name[i], phone[i], email[i]);
                        printf("Contact updated!\n");
                        break;
                    }
                }
                break;
            case 5:
                printf("Enter name to delete: ");
                scanf("%s", temp);
                for (int i = 0; i < count; i++) 
                {
                    if (strcmp(name[i], temp) == 0) 
                    {
                        for (int j = i; j < count - 1; j++) 
                        {
                            strcpy(name[j], name[j + 1]);
                            strcpy(phone[j], phone[j + 1]);
                            strcpy(email[j], email[j + 1]);
                        }
                        count--;
                        printf("Contact deleted!\n");
                        break;
                    }
                }
                break;
            case 6:
                return 0;
                break;
            
        }
    }
    return 0;
}
