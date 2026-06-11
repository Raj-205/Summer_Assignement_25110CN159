#include<stdio.h>
#include<limits.h>
int main()
{
   int sz;
   int secondlargest= INT_MIN;
   int largest = INT_MIN;

    printf("Enter the size of array:");
    scanf("%d",&sz);
    int num[sz];
    for(int i=0;i<sz;i++)
    {  
        scanf("%d",&num[i]);
    } 
    for(int i=0;i<sz;i++)
    {
        if(num[i]>largest)
        {
         largest= num[i];
        }
        else if( num[i]<largest && num[i]>secondlargest)
        {
            secondlargest = num[i];
        }
    } 
    if(secondlargest == INT_MIN)
    {
       printf("There is no second largest element ");
    }
    else
    {
    printf("The secand largest element is %d", secondlargest);
    }
    return 0;
}
