#include <stdio.h>
int main() 
{
    int num1, num2, choice;
    float result;
    printf("\tCalculator\n\n");
    while (1) 
    {
        printf("Enter choice:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        scanf("%d", &choice);
        if (choice == 5) 
        {
            printf("Exiting calculator...\n");
            return 0;   
        }
        printf("Enter Number 1: ");
        scanf("%d", &num1);
        printf("Enter Number 2: ");
        scanf("%d", &num2);
        switch (choice) 
        {
            case 1:
                result = num1 + num2;
                printf("Addition = %.2f\n\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Subtraction = %.2f\n\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Multiplication = %.2f\n\n", result);
                break;
            case 4:
                if (num2 != 0) 
                {
                    result = (float)num1 / num2;
                    printf("Division = %.2f\n\n", result);
                } else 
                {
                    printf("Zero Division Error!\n\n");
                }
                break;
            
        }
    }
    return 0;
}
