#include<stdio.h>
#include<string.h>
int main()
{
    char name[200];
    printf("Enter the string:");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int len = strlen(name);
    int found =1;
    for(int i=0;i<len/2;i++)
    {
        if(name[i]!=name[len-1-i])
        {
              found=0;
              break;
        }
        
    }
    if(found)
        printf("The string is palindrome");
    else 
         printf("The string is not palindrome");
    return 0;
}