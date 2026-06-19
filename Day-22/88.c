#include<stdio.h>
#include<string.h>
int main()
{
    char name[200];
    printf("Enter the sentence:");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name, "\n")] = '\0';
    int len = strlen(name);
    int spac=0;
    for (int i = 0; i < len; i++) 
    {
        if (name[i] != ' ') 
        {  
            name[spac] = name[i]; 
            spac++;
        }
    }
    name[spac] = '\0'; 
    printf("The string after removing spaces: %s",name);
    return 0;
}