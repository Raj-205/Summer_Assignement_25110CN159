#include <stdio.h>
#include <string.h>

int main() 
{
  int choice, num = 0, roll[100];
  char name[100][50];
  char stream[100][50];
  int temp, i, j;
  printf("\t Student Record Management System\n");
  while (1) 
  {
    printf("\nEnter your choice\n1. Add Record\n2. Remove Record\n3. Display\n4. Exit\n");
    scanf("%d", &choice);
    switch (choice) 
    {
      case 1: 
      printf("Please enter how many records you want to enter: ");
      scanf("%d", &num);
      for (i = 0; i < num; i++) 
      {
        printf("Enter Student Name: ");
        scanf("%s", name[i]);
        printf("Enter Student Roll No: ");
        scanf("%d", &roll[i]);
        printf("Enter Student Stream: ");
        scanf("%s", stream[i]);
      }
        break;
      case 2: 
      printf("Enter the Roll no to remove the record: ");
      scanf("%d", &temp);
      for (i = 0; i < num; i++) 
      {
        if (roll[i] == temp)
        {
          for (j = i; j < num - 1; j++) 
            {
              roll[j] = roll[j + 1];
              strcpy(name[j], name[j + 1]);
              strcpy(stream[j], stream[j + 1]);
            }
            num--;
            printf("Record deleted.\n");
            break;
        }
      }
      if (i == num) 
      {
        printf("Record not found.\n");
      }
        break;
      case 3: 
        printf("\n All Records \n");
        for (i = 0; i < num; i++) 
        {
          printf("Name: %s\n", name[i]);
          printf("Roll No: %d\n", roll[i]);
          printf("Stream: %s\n\n", stream[i]);
        }
          break;
      case 4: 
          printf("Record are updated\n");
          return 0;
        }
    }
  return 0;
}
