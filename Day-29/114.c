#include <stdio.h>

int main() 
{
    printf("\t Array Operations System \n");
    int x, choice, temp, pos;
    printf("Enter the Number of Elements: ");
    scanf("%d", &x);
    int num[100]; 
    printf("Enter the Elements of Array:\n");
    for (int i = 0; i < x; i++) 
    {
        scanf("%d", &num[i]);
    }
    while (1) 
    {
        printf("\nEnter choice:\n1.Display Elements\n2.Add Element\n3.Remove Element\n4.Update Element\n5.Exit\n");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Array: ");
                for (int i = 0; i < x; i++) 
                {
                    printf("%d ", num[i]);
                }
                printf("\n");
                break;

            case 2:
                if (x < 100) 
                {
                    printf("Enter the Element to Add: ");
                    scanf("%d", &temp);
                    num[x] = temp;
                    x++;
                } else 
                {
                    printf("Array is full!\n");
                }
                break;

            case 3:
                printf("Enter the Element to Remove: ");
                scanf("%d", &temp);
                int found = 0;
                for (int i = 0; i < x; i++) 
                {
                    if (num[i] == temp) 
                    {
                        found = 1;
                        for (int j = i; j < x - 1; j++) 
                        {
                            num[j] = num[j + 1];
                        }
                        x--;
                        break; 
                    }
                }
                if (!found) 
                {
                    printf("Element not found!\n");
                }
                break;

            case 4:
                printf("Enter position to update (0-%d): ", x - 1);
                scanf("%d", &pos);
                if (pos >= 0 && pos < x) 
                {
                    printf("Enter new value: ");
                    scanf("%d", &temp);
                    num[pos] = temp;
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 5:
                return 0;
        }
    }
    return 0;
}
