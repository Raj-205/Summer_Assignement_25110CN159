#include<stdio.h>
void search(int arr[],int x,int sz)
{
  for(int i=0;i<sz;i++)
  {
    if(arr[i]== x)
    {
        printf("The target is found at %d position \n",i+1);
        break;
    }
  }
}
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
    int target;
    printf("Enter the number to search in array:");
    scanf("%d",&target);
    search(num,target,sz);
   return 0;
}