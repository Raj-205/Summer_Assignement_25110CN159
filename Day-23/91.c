#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char name1[200];
    char name2[200];
    printf("Enter the 1. string:");
    scanf("%s",name1);
    printf("Enter the 2. string:");
    scanf("%s",name2);
   int len1= strlen(name1);
   int len2= strlen(name2);
   if(len1==len2)
   {
    for(int i=0;i<len1;i++)
    {
        name1[i]=toupper(name1[i]);
        name2[i]=toupper(name2[i]);
    }
    char temp;
    for(int i=0;i<len1;i++)
    {
        for(int j=i+1;j<len1;j++)
        {
          if(name1[i]>name1[j])
          {
            temp=name1[i];
            name1[i]=name1[j];
            name1[j]=temp;
          }
           if(name2[i]>name2[j])
          {
            temp=name2[i];
            name2[i]=name2[j];
            name2[j]=temp;
          }
        }
    }
 if(strcmp(name1,name2)==0)
 {
    printf("The strings are anagrams.");
 }
 else
 {
    printf("The strings are not anagrams.");
 }

}
   else
   {
    printf("The strings are not anagrams.");
   }
   return 0;
}