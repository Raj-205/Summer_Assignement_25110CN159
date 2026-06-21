#include <stdio.h>
#include<string.h>
int main() {
    char name[200], result[200];
    int i, j, k, len = 0, pos = 0, dupli;
    printf("Enter a sentence: ");
    fgets(name, sizeof(name), stdin);
    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++) 
    {
        len++;
    }
    for (i = 0; i < len; i++) 
    {
        dupli = 0;
        for (j = 0; j < pos; j++) 
        {
            if (name[i] == result[j]) 
            {
                dupli= 1;
                break;
            }
        }
        if (!dupli) 
        {
            result[pos++] = name[i];
        }
    }
    result[pos] = '\0';
    printf("String after removing duplicates: %s\n", result);
    return 0;
}
