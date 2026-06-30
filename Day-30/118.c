#include<stdio.h>
#include<string.h>
int main()
{
   int id[100];
   char name[100][100];
   char iss[100][20];
   char ret[100][20];
   printf("\t Librery Management System\n");
   int choice,count=0;
   int temp,temp1;
   while(1)
   {
    printf("Enter the Choice:\n1.Add Record\n2.Dispaly Record\n3.Remove Record\n4.Update record\n5.Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter Student Name,Id,Issue Date,Return date\n");
        scanf("%s %d %s %s",name[count],&id[count],iss[count],ret[count]);
        count++;
        break;
        case 2:
        for(int i=0;i<count;i++)
        {
            printf("Name:%s\n",name[i]);
            printf("Id:%d\n",id[i]);
            printf("Issue day:%s\n",iss[i]);
            printf("Return Date:%s\n\n",ret[i]);
        }
        break;
        case 3:
        printf("Enter id for remove Record:");
        scanf("%d",&temp);
        for (int i = 0; i < count; i++) 
      {
        if (id[i] == temp)
        {
          for (int j = i; j < count - 1; j++) 
            {
              id[j] = id[j + 1];
              strcpy(name[j], name[j + 1]);
              strcpy(iss[j],iss[j+1]);
              strcpy(ret[j],ret[j+1]);
            }
            count--;
            printf("Record deleted.\n");
            break;
        }
      }
      break;
      case 4:
      printf("Enter the id for update:");
      scanf("%d",&temp1);
      for (int i = 0; i < count; i++) 
      {
        if (id[i] == temp1)
        {
            printf("Enter Name, Issue Date,Return Date\n");
            scanf("%s\n %s\n %s\n", name[i],&iss[i],&ret[i]);
            printf("Record Updated.\n");
            break;
        }

      }
     break;
     case 5:
      printf("All Record are Saved!\n");
      return 0;
    }

   }
   return 0;
}