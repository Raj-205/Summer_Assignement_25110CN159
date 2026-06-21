#include <stdio.h>
#include<string.h>
int main() 
{
    char name1[200], name2[200];
    int i,j,k, len1,len2, flag = 0;
    printf("Enter first string:");
    scanf("%s", name1);
    printf("Enter secand string:");
    scanf("%s",name2);
    len1=strlen(name1);
    len2=strlen(name2);
    if (len1 != len2) 
    {
        printf("Not Rotation");
    }
   for (i = 0; i < len1; i++) 
    {
        flag = 1;
        for (j = 0, k = i; j < len2; j++, k++)
        {
            if (name1[k % len1] != name2[j]) 
            {
                flag = 0;
                break;
            }
        }
        if (flag) 
        {
            printf("String Rotation possible");
            return 0;
        }
    }
    printf("Not Rotation");
    return 0;
}