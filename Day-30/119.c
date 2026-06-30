#include <stdio.h>
#include <string.h>

int main() 
{
  int choice, num=0, id[100];
  float account=0,sal[100];
  char name[100][50];
  char post[100][50];
  int temp1,temp, i, j;
  printf("\t Employee Management System\n");
  while (1) 
  {
    printf("\nEnter your choice\n1. Add Record\n2. Remove Record\n3. Display\n4. Increment in Salary\n5. Exit\n");
    scanf("%d", &choice);
    switch (choice) 
    {
      case 1: 
      printf("Please enter how many records you want to enter: ");
      scanf("%d", &num);
      for (i = 0; i < num; i++) 
      {
        printf("Enter Employee Name: ");
        scanf("%s", name[i]);
        printf("Enter Employee Id - No: ");
        scanf("%d", &id[i]);
        printf("Enter Post : ");
        scanf("%s", post[i]);
        printf("Enter Salary : ");
        scanf("%f",&sal[i]);
      }
      break;
      case 2: 
      printf("Enter the Employee-Id no  to remove the record: ");
      scanf("%d", &temp);
      for (i = 0; i < num; i++) 
      {
        if (id[i] == temp)
        {
          for (j = i; j < num - 1; j++) 
            {
              id[j] = id[j + 1];
              strcpy(name[j], name[j + 1]);
              strcpy(post[j], post[j + 1]);
              sal[j]=sal[j + 1];
            }
            num--;
            printf("Record deleted.\n");
            break;
        }
      }
      break;
      case 3: 
        printf("\n All Records \n");
        for (i = 0; i < num; i++) 
        {
          printf("Name: %s\n", name[i]);
          printf("Employee Id-no : %d\n", id[i]);
          printf("Post: %s\n", post[i]);
          printf("Salary: %.2f\n",sal[i]);
        }
          break;

      case 4:
      printf("Enter the employee Id-No for Increment :");
      scanf("%d",&temp1);
      printf("Enter the Account to increase:");
      scanf("%f",&account);
      for (int i = 0; i < num; i++) 
      {
        if (id[i] == temp1)
        {
           sal[i]+=account ;
           break;
        }
      }
      break;
      case 5: 
      printf("Record are updated\n");
      return 0;
    }  
  }
  return 0;
}
