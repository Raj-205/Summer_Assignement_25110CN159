#include<stdio.h>
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
 int maxFreq = 0, element = num[0];
    for (int i = 0; i < sz; i++) 
    {
        int count = 1;
        for (int j = i + 1; j < sz; j++) 
        {
            if (num[i] == num[j]) 
            {
                count++;
            }
        }
        if (count > maxFreq)
         {
            maxFreq = count;
            element = num[i];
        }
    }

    printf("The most frequent element is :%d\n", element);
    return 0;
}