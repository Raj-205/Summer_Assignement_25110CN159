#include<stdio.h>
int main()
{
    int sz;
    printf("Enter the size of Array:");
    scanf("%d",&sz);
    int num[sz];
    printf("Enter the element for search:\n");
    for(int i=0;i<sz;i++)
    {
        scanf("%d",&num[i]);
    } 
    int target;
    printf("Enter the target number for search:");
    scanf("%d",&target); 
 int st=0;
 int end= sz-1;
 int found = 0;
 while(st <= end) 
 {
    int mid = (st + end) / 2;
    if(num[mid] == target) 
    {
        found = mid;
        break;
    } 
    else if(num[mid] < target)
     {
        st = mid + 1;
    }
     else 
    {
        end = mid - 1;
    }
}
if(found != 0)
    printf("Target %d found at index %d\n", target, found);
    else
    printf("Target not found in the array\n");
 return 0;
}