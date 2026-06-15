#include<stdio.h>
int main()
{
    int sz;
    printf("Enter the size of Array:");
    scanf("%d",&sz);
    int num[sz];
    printf("Enter the element for shorting:\n");
    for(int i=0;i<sz;i++)
    {
        scanf("%d",&num[i]);
    }
for(int i=0;i<sz;i++)
{
    for(int j=i+1;j<sz;j++)
    {   
       if(num[i]>num[j])
        {
         int temp = num[i];
         num[i]=num[j];
         num[j]=temp;
        }
    }
}
printf("The shorted Array is: ");
for(int i=0;i<sz;i++)
{
    printf("%d ",num[i]);
} 
return 0;
}