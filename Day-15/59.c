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
    printf("Enter the step value of Rotate array right :\n");
    scanf("%d",&step);
    if(step<=sz)
    {
    printf("The array after right rotaty:");
     for(int j=sz-step;j<sz;j++)
    {
        printf("\n%d",num[j]);
    }
    for(int i=0;i<sz-step;i++)
    {
        printf("\n%d",num[i]);
    }
   
    }
    else
    {
        printf("step less the size %d",sz);
    }
   return 0;
}