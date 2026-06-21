#include <stdio.h>
#include<string.h>
int main() 
{
    char name[200], longest[200];
    int i = 0, j = 0, maxLen = 0, currLen = 0, start = 0;
    printf("Enter a sentence: ");
    fgets(name, sizeof(name), stdin);
    while (name[i] != '\0') {
        if (name[i] != ' ' && name[i] != '\n') 
        {
            currLen++;
        } 
        else 
        {
            if (currLen > maxLen) 
            {
                maxLen = currLen;
                for (j = 0; j < currLen; j++) 
                {
                    longest[j] = name[start + j];
                }
                longest[currLen] = '\0';
            }
            currLen = 0;
            start = i + 1;
        }
        i++;
    }
    if (currLen > maxLen) 
    {
        maxLen = currLen;
        for (j = 0; j < currLen; j++) 
        {
            longest[j] = name[start + j];
        }
        longest[currLen] = '\0';
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
