#include<stdio.h>
#include<string.h>
int main()
{  
    char name[100];
    printf("Enter the string:");
    fgets(name , sizeof(name),stdin);
    int sz = strlen(name);
    for(int i=0;i<sz/2;i++)
    {
        char temp = name[i];
        name[i]=name[sz-1-i];
        name[sz-1-i]=temp;

    }
    printf("the reverse string is :");
    printf("%s",name);
    return 0;
}