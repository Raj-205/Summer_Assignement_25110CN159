#include <stdio.h>
#include <string.h>
int main() 
{
    int roll[100], marks[100][5], count=0, choice, i, j, r;
    char name[100][50];
    float total[100], percent[100];
    printf("\t Marksheet Management System\n");
    while(1) 
    {
        printf("\n1. Add Record\n2. Display All\n3. Search Record\n4. Update Marks\n5. Delete Record\n6. Exit\n");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1:
                printf("Enter Roll No: ");
                scanf("%d", &roll[count]);
                printf("Enter Name: ");
                scanf("%s", name[count]);
                total[count] = 0;
                for(j=0; j<5; j++) 
                {
                    printf("Enter marks for subject %d: ", j+1);
                    scanf("%d", &marks[count][j]);
                    total[count] += marks[count][j];
                }
                percent[count] = total[count]/5.0;
                count++;
                break;

            case 2: 
                for(i=0; i<count; i++) 
                {
                    printf("Roll: %d Name: %s Total: %.2f Percent: %.2f\n", roll[i], name[i], total[i], percent[i]);
                }
                break;

            case 3: 
                printf("Enter Roll No: ");
                scanf("%d", &r);
                for(i=0; i<count; i++) 
                {
                    if(roll[i]==r) 
                    {
                        printf("Roll: %d Name: %s\n", roll[i], name[i]);
                        for(j=0; j<5; j++) printf("Subject %d: %d\n", j+1, marks[i][j]);
                        printf("Total: %.2f Percent: %.2f\n", total[i], percent[i]);
                        break;
                    }
                }
                if(i==count) printf("Not found\n");
                break;

            case 4: 
                printf("Enter Roll No to update: ");
                scanf("%d", &r);
                for(i=0; i<count; i++) 
                {
                    if(roll[i]==r) 
                    {
                        total[i]=0;
                        for(j=0; j<5; j++) 
                        {
                            printf("Enter new marks for subject %d: ", j+1);
                            scanf("%d", &marks[i][j]);
                            total[i]+=marks[i][j];
                        }
                        percent[i]=total[i]/5.0;
                        break;
                    }
                }
                if(i==count) printf("Not found\n");
                break;

            case 5: 
                printf("Enter Roll No to delete: ");
                scanf("%d", &r);
                for(i=0; i<count; i++) 
                {
                    if(roll[i]==r) 
                    {
                        for(j=i; j<count-1; j++) 
                        {
                            roll[j]=roll[j+1];
                            strcpy(name[j], name[j+1]);
                            for(int k=0; k<5; k++) marks[j][k]=marks[j+1][k];
                            total[j]=total[j+1];
                            percent[j]=percent[j+1];
                        }
                        count--;
                        break;
                    }
                }
                if(i==count) printf("Not found\n");
                break;

            case 6: 
                return 0;
        }
    }
    return 0;
}
