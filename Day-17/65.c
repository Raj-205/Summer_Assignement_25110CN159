#include<stdio.h>
int main()
{
    int sz1;
    printf("Enter the size of 1 Array:");
    scanf("%d",&sz1);
    int num1[sz1];
    printf("Enter the element of 1 Array:\n");
    for(int i=0;i<sz1;i++)
    {
        scanf("%d",&num1[i]);
    } 
    int sz2;
    printf("Enter the size of 2 Array:");
    scanf("%d",&sz2);
    int num2[sz2];
    printf("Enter the element of 2 Array:\n");
    for(int i=0;i<sz2;i++)
    {
        scanf("%d",&num2[i]);
    } 
    int sz=sz1+sz2;
    int num[sz];
    for(int i=0;i<sz1;i++)
    {
        num[i]=num1[i];
    }
    for(int j=0;j<sz;j++)
    {
        num[sz1+j]=num2[j];
    }
  printf("The merged array is :");
  for(int k=0;k<sz;k++)
  {
    printf("%d ",num[k]);
  }
  return 0;
}