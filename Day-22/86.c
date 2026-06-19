#include<stdio.h>
#include<string.h>
int main()
{
    char name[200];
    printf("Enter the sentence:");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name, "\n")] = '\0';
    int len= strlen(name);
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(name[i]==' ')
        {
            count++;
        }
    }
    
   if (len > 0) 
   {
    printf("The count of words in sentence is : %d", count + 1);
   } else 
   {
    printf("The count of words in sentence is : 0");
   }
return 0;
}