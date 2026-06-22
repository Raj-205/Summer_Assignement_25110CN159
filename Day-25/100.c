#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter number of words:\n");
    scanf("%d", &n);
    char name[50][50];  
    printf("Enter the words:");
    for (int i = 0; i < n; i++) 
    {
        scanf("%s", name[i]);
    }
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (strlen(name[i]) > strlen(name[j])) 
            {
                char temp[50];
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf(" Words sorted by length is :\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }
    return 0;
}
