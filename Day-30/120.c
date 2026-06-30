#include <stdio.h>
#include <string.h>
#include <ctype.h>
int checkLength(char password[]);
int checkUpper(char password[]);
int checkLower(char password[]);
int checkDigit(char password[]);
int checkSpecial(char password[]);
int main() 
{
    char password[100];
    int score = 0;
    printf("Enter your password: ");
    scanf("%s", password);

    printf("\n Password Analysis \n");

    if (checkLength(password)) 
    {
        printf(" Length OK (>= 8)\n");
        score++;
    } else 
    {
        printf(" Too short (minimum 8 characters)\n");
    }

    if (checkUpper(password)) 
    {
        printf(" Contains uppercase letter\n");
        score++;
    } else 
    {
        printf(" Add at least one uppercase letter\n");
    }

    if (checkLower(password)) 
    {
        printf(" Contains lowercase letter\n");
        score++;
    } else 
    {
        printf(" Add at least one lowercase letter\n");
    }

    if (checkDigit(password)) 
    {
        printf(" Contains digit\n");
        score++;
    } else 
    {
        printf(" Add at least one digit\n");
    }

    if (checkSpecial(password)) 
    {
        printf(" Contains special character\n");
        score++;
    } else 
    {
        printf(" Add at least one special character (!@#$ etc.)\n");
    }

    printf("\nPassword Strength: ");
    if (score == 5)
        printf(" Very Strong\n");
    else if (score >= 3)
        printf(" Moderate\n");
    else
        printf(" Weak\n");
    return 0;
}

int checkLength(char password[]) 
{
    return strlen(password) >= 8;
}
int checkUpper(char password[]) 
{
    for (int i = 0; password[i] != '\0'; i++)
    {
        if (isupper(password[i])) return 1;
        return 0;
    }
}
int checkLower(char password[]) 
{
    for (int i = 0; password[i] != '\0'; i++)
    {
        if (islower(password[i])) return 1;
        return 0;
    }
}
int checkDigit(char password[]) 
{
    for (int i = 0; password[i] != '\0'; i++)
    {
        if (isdigit(password[i]))
        return 1;
    }
    return 0;
}
int checkSpecial(char password[]) 
{
    char specials[] = "!@#$%^&*()-_=+[]{};:'\",.<>/?\\|";
    for (int i = 0; password[i] != '\0'; i++)
    {
        if (strchr(specials, password[i]))
        return 1;
    }
    return 0;
}
