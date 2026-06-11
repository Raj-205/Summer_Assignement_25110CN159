#include<stdio.h>
int main()
{
   int sz;
    printf("Enter the size of array:");
    scanf("%d",&sz);
    int num[sz];
    for(int i=0;i<sz;i++)
    {  
        scanf("%d",&num[i]);
    }  
    for(int i=0;i<sz;i++)
    {
        for(int j= i+1;j<sz;j++)
        {
            if(num[i] == num[j]) 
            {
               printf("The duplicate elements is: %d\n", num[i]);
               break; 
           }
        }
    } 
  return 0;
}