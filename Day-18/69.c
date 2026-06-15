#include<stdio.h>
int main()
{   
    int sz;
    printf("Enter the size is Array:");
    scanf("%d",&sz);
    int num[sz];
    printf("Enter the element of shorting:\n");
    for(int i=0;i<sz;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0; i<sz-1; i++) 
    {
        for(int j=0; j<sz-1-i; j++) 
        {
          if(num[j] > num[j+1]) 
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

printf("The shorted Array is: ");
for(int j=0;j<sz;j++)
{
    printf("%d ",num[j]);
}
return 0;
}