#include<stdio.h>
#include<string.h>
int main()
{
    int sz , count=0;
    printf("Enter the size of string:");
    scanf("%d",&sz);
    char name[sz+1];
    getchar();
    printf("Enter the string:");
    fgets(name , sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';
    int len = strlen(name);
    for(int i=0;i<len;i++)
    {
       if(strchr( "aeiouAEIOU",name[i])!= NULL)
       {
        count++;
       }
    }
    printf("The count of vowels is: %d \n",count);
    printf("The count of consonants is: %d",len-count);
    return 0;
}