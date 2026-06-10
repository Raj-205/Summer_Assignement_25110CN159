#include<stdio.h>
void check(int arr[],int sz)
{
    int evencount=0,oddcount=0, i;
    
    for(i=0;i<sz;i++)
    {
        if(arr[i]%2==0)
        {
          evencount++;
        }
        else
        {
             oddcount++;
        }

    }
     printf("The total even element is is %d\n", evencount);
     printf("The total odd element is %d",oddcount);
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
        check(arr,sz);
   
    return 0;
}