#include<stdio.h>
int arrsum(int arr[],int sz)
{
    int sum=0,i;
    for(i=0;i<sz;i++)
    {
        sum+= arr[i];
    }
     return sum;
}
int main()
{
    int sz ,i,avg;
    printf("Enter the size of array:");
    scanf("%d",&sz);
    int arr[sz];
    for(i=0;i<sz;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result;
    result = arrsum( arr, sz);
    avg = (result/sz);
 printf("The sum of array is %d \n", result);
 printf("The avg is %d",avg);
 return 0;
}