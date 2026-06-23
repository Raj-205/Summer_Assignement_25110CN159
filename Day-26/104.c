 #include <stdio.h>

int main() 
{
    int score = 0;
    int ans;
    printf("Quiz Application\n");
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your choice: ");
    scanf("%d", &ans);
    if (ans== 2) 
    {
        printf("Correct\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Delhi.\n");
    }
    printf("\nQ2. Who is known as the Father of C language?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your choice: ");
    scanf("%d", &ans);
    if (ans== 1) 
    {
        printf("Correct!\n");
        score++;
    } else 
    {
        printf("Wrong! The correct answer is Dennis Ritchie.\n");
    }
    printf("\nQ3. Which data type is used to store characters in C?\n");
    printf("1. int\n2. char\n3. float\n4. double\n");
    printf("Enter your choice: ");
    scanf("%d", &ans);
    if (ans == 2) 
    {
        printf("Correct!\n");
        score++;
    } else 
    {
        printf("Wrong! The correct answer is char.\n");
    }
    printf("\nYour final score is: %d/3\n", score);
    if (score == 3) 
    {
        printf("Excellent! You got all correct.\n");
    } else if (score == 2) 
    {
        printf("Good job!\n");
    } else 
    {
        printf("Better luck next time.\n");
    }
    return 0;
}
