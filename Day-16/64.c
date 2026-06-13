#include <stdio.h>

int main() 
{
    int sz;
    printf("Enter the size of Array:");
    scanf("%d",&sz);
    int num[sz];
    printf("Enter the element of arrays:\n");
    for(int i=0;i<sz;i++)
    {
        scanf("%d",&num[i]);
    } 

    int newSize = 0;
    for (int i = 0; i < sz; i++) 
    {
        int dupli = 0;
        for (int j = 0; j < newSize; j++) 
        {
            if (num[i] == num[j]) 
            {
                dupli = 1;
                break;
            }
        }
        if (!dupli) 
        {
            num[newSize++] = num[i];
        }
    }
     printf("The updated Array is :");
    for (int i = 0; i < newSize; i++) 
    {
        printf("%d ", num[i]);
    }
return 0;
}