#include<stdio.h>
int main()
{    
    int sz=0;
    char name[100];
    printf("Enter the string:");
    fgets(name , sizeof(name),stdin);
    while(name[sz]!= '\0' && name[sz]!='\n')
    {
        sz++;
    }
    printf("This is size of string : %d",sz);
    return 0;
}
