#include <stdio.h>
#include <string.h>

int main() 
{
    int empID[100];
    char name[100][50];
    char post[100][50];
    float salary[100];
    int count = 0, choice, i, j, id;
    float amount;
    printf("\t Salary Management System\n");

    while(1) 
    {
        printf("\n1. Add Record\n2. Display Records\n3. Search Record\n4. Increment Salary\n5. Deduct Salary\n6. Update Salary\n7. Delete Record\n8. Exit\n");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1: 
                printf("Enter ID, Name, Post, Salary: ");
                scanf("%d %s %s %f", &empID[count], name[count], post[count], &salary[count]);
                count++;
                break;

            case 2: 
                for(i=0; i<count; i++)
                    printf("ID:%d Name:%s Post:%s Salary:%.2f\n", empID[i], name[i], post[i], salary[i]);
                break;

            case 3: 
                printf("Enter ID: ");
                scanf("%d", &id);
                for(i=0; i<count; i++) 
                {
                    if(empID[i]==id) 
                    {
                        printf("ID:%d Name:%s Post:%s Salary:%.2f\n", empID[i], name[i], post[i], salary[i]);
                        break;
                    }
                }
                if(i==count) printf("Not found\n");
                break;

            case 4: 
                printf("Enter ID and increment amount: ");
                scanf("%d %f", &id, &amount);
                for(i=0; i<count; i++) if(empID[i]==id) { salary[i]+=amount; break; }
                break;

            case 5: 
                printf("Enter ID and deduction amount: ");
                scanf("%d %f", &id, &amount);
                for(i=0; i<count; i++) if(empID[i]==id) { salary[i]-=amount; break; }
                break;

            case 6: 
                printf("Enter ID and new salary: ");
                scanf("%d %f", &id, &amount);
                for(i=0; i<count; i++) if(empID[i]==id) { salary[i]=amount; break; }
                break;

            case 7: 
                printf("Enter ID to delete: ");
                scanf("%d", &id);
                for(i=0; i<count; i++) 
                {
                    if(empID[i]==id) 
                    {
                        for(j=i; j<count-1; j++) 
                        {
                            empID[j]=empID[j+1];
                            strcpy(name[j], name[j+1]);
                            strcpy(post[j], post[j+1]);
                            salary[j]=salary[j+1];
                        }
                        count--;
                        break;
                    }
                }
                break;

            case 8: 
                return 0;
        }
    }
    return 0;
}
