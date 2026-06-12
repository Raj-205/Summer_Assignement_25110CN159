#include<stdio.h>
int main()
{
    int sz,step;
    printf("Enter the size of Array:");
    scanf("%d",&sz);
    int num[sz];
    printf("Enter the Array Element \n");
    for(int i=0;i<sz;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter the step value of Rotate array left:\n");
    scanf("%d",&step);
    if(step<=sz)
    {
    printf("The array after left rotate:");
    for(int i= step;i<sz;i++)
    {
        printf("\n%d",num[i]);
    }
    for(int j=0;j<step;j++)
    {
        printf("\n%d",num[j]);
    } 
    }
    else
    {
        printf("step less the size %d",sz);
    }
   return 0;
}