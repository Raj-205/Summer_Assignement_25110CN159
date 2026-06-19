#include <stdio.h>
#include <string.h>
int main() 
{
    char name[200];
    printf("Enter a sentence: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int len = strlen(name);
    printf("Character frequencies:\n");
    for (int i = 0; i < len; i++) 
    {
        if (name[i] == '\0') 
            continue;
        int count = 1;
        for (int j = i + 1; j < len; j++) 
        {
            if (name[i] == name[j]) 
            {
                count++;
                name[j] = '\0';
            }
        }

        if (name[i]!= ' ' && name[i]!= '\0') 
        {  
            printf("%c: %d\n", name[i], count);
        }
    }
    return 0;
}