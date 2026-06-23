#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randam()
{
    int x;
    x = (rand() % 100) + 1;   
    return x;
}
int main()
{
    int num,count =0;
    int found = 0;
    srand(time(NULL));        
    int x = randam();         
    printf("Guess the number between 1 and 100:\n");
    while (found != 1)
    {
        printf("Enter your guess: ");
        scanf("%d", &num);

        if (num > x)
        {
            printf("Your guess is too high!\n");
            count++;
        }
        else if (num < x)
        {
            printf("Your guess is too low!\n");
            count++;
        }
        else
        {
            printf("You guessed correct!\n");
            printf("You took %d tries!\n",count);
            found = 1;
            count++;
            break;
        }
    }
    return 0;
}
