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
    int sum; 
    printf("Enter the sum of pair: ");
    scanf("%d", &sum);

    for (int i = 0; i < sz; i++) 
    {
        for (int j = i + 1; j < sz; j++) 
        {
            if (num[i] + num[j] == sum) 
            {
                printf("The pair with target sum is:%d %d\n", num[i], num[j]);
            }
        
        }
    }
    return 0;
}