#include<stdio.h>
#include<limits.h>
void larg(int arr[],int sz)
{
    int largest, i;
    largest = INT_MIN;
     for(i=0;i<sz;i++)
     {
        if(arr[i]> largest)
        {
            largest= arr[i];
        }

     }
     printf("The largest element is %d\n",largest);
}
  
void smal(int arr[],int sz)
{
    int smallest, i;
    smallest = INT_MAX;
     for(i=0;i<sz;i++)
     {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }

     }
        printf("The smallest element is %d",smallest);
}
    int main()
{
        int sz,i;
        printf("Enter the size of Array:");
        scanf("%d",&sz);
        int arr[sz];
        printf("Enter the elements:");
        for(i=0;i<sz;i++)
        {
            scanf("%d",&arr[i]);
        }
    larg(arr,sz);
    smal(arr,sz);
    return 0;
}
    
