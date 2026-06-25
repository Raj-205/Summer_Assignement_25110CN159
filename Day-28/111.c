#include <stdio.h>
#include <string.h>
int main() 
{
    int ticketNo[100], seats[100];
    char name[100][100], destination[100][100];
    int count = 0, choice, temp;
    while (1) 
    {
        printf("\n Ticket Booking System \n");
        printf("1. Book Ticket\n2. Display Tickets\n3. Cancel Ticket\n4. Update Ticket\n5. Exit\n");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                ticketNo[count] = count + 1;
                printf("Enter Name, Destination, Seats:\n");
                scanf("%s %s %d", name[count], destination[count], &seats[count]);
                printf("Ticket booked! Ticket No: %d\n", ticketNo[count]);
                count++;
                break;
            case 2:
                for (int i = 0; i < count; i++) 
                {
                    printf("\nTicket No: %d\n", ticketNo[i]);
                    printf("Name: %s\n", name[i]);
                    printf("Destination: %s\n", destination[i]);
                    printf("Seats: %d\n", seats[i]);
                }
                break;
            case 3:
                printf("Enter Ticket No to cancel: ");
                scanf("%d", &temp);
                for (int i = 0; i < count; i++) 
                {
                    if (ticketNo[i] == temp) 
                    {
                        for (int j = i; j < count - 1; j++) 
                        {
                            ticketNo[j] = ticketNo[j + 1];
                            strcpy(name[j], name[j + 1]);
                            strcpy(destination[j], destination[j + 1]);
                            seats[j] = seats[j + 1];
                        }
                        count--;
                        printf("Ticket cancelled.\n");
                        break;
                    }
                }
                break;

            case 4:
                printf("Enter Ticket No to update: ");
                scanf("%d", &temp);
                for (int i = 0; i < count; i++) 
                {
                    if (ticketNo[i] == temp) 
                    {
                        printf("Enter New Name, Destination, Seats:\n");
                        scanf("%s %s %d", name[i], destination[i], &seats[i]);
                        printf("Ticket updated.\n");
                        break;
                    }
                }
                break;
            case 5:
                return 0;
                break;   
        }
    }
    return 0;
}
