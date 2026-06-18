#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int  count=0;
    char name[200];
    
    printf("Enter the string:");
    fgets(name , sizeof(name),stdin);
    int len =strlen(name);
    for(int i=0;i<len;i++)
    {
        name[i]= toupper(name[i]);
    }
    fputs(name,stdout);
    return 0;
}

