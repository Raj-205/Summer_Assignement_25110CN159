#include <stdio.h>
#include <string.h>
int main() 
{
    char  name1[100], name2[100];
    printf("Enter first string: ");
    scanf("%s", name1);

    printf("Enter second string: ");
    scanf("%s", name2);

    printf("Common characters are : ");
    for (int i = 0; name1[i] != '\0'; i++) 
    {
        for (int j = 0; name2[j] != '\0'; j++) 
        {
            if (name1[i] == name2[j]) 
            {
                printf("%c ", name1[i]);
                break;  
            }
        }
    }
    return 0;
}

