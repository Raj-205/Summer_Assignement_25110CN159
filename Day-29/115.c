#include <stdio.h>
#include <string.h>
int main() 
{
    char name1[100], name2[100], temp[100];
    int choice;
    printf("Enter a string: ");
    scanf("%s", name1);
    while (1) 
    {
        printf("\tString Operations \n");
        printf("Enter your choice:\n1. Length of string\n2. Concatenate string\n3. Compare strings\n4. Reverse string\n5. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of string = %d\n", strlen(name1));
                break;
            case 2:
                printf("Enter another string: ");
                scanf("%s", name2);
                strcat(name1, name2);
                printf("Concatenated string = %s\n", name1);
                break;

            case 3:
                printf("Enter another string: ");
                scanf("%s", name2);
                if (strcmp(name1, name2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 4:
                strcpy(temp, name1);
                int len = strlen(temp);
                for (int i = 0; i < len / 2; i++) 
                {
                    char c = temp[i];
                    temp[i] = temp[len - i - 1];
                    temp[len - i - 1] = c;
                }
                printf("Reversed string = %s\n", temp);
                break;

            case 5:
                return 0;
        }
    }
    return 0;
}
