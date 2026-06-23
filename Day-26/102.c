#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int age;
    char citizen[100];
    int found = 0;
    printf("The Voting Eligibility System\n");
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your citizenship: ");
    scanf("%s", citizen);
    int len = strlen(citizen);
    for(int i =0;i<len;i++)
    {
        citizen[i] = toupper(citizen[i]);
    }

    if (age >= 18 && strcmp(citizen, "INDIAN") == 0)
    {
        printf("You are eligible to vote!\n");      
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }
    return 0;
}
