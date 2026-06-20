#include <stdio.h>
#include <string.h>
int main() 
{
    char name[200];
    printf("Enter a sentence: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int len = strlen(name);
    int maxcount= 0;
    char maxchar='0';
    for (int i = 0; i < len; i++) 
    {
        if (name[i] == '\0'|| name[i] == ' ') 
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
        if (count > maxcount) 
        {
            maxcount = count;
            maxchar = name[i];
        }
    }
    if (maxchar != '\0')
        printf("Maximum occurring character is '%c': %d \n", maxchar, maxcount);
    else
        printf("No characters found.");

    return 0;
}