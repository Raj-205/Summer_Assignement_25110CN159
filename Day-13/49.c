#include<stdio.h>
int main()
{    int sz,i,j;
       printf("Enter the size of array:");
       scanf("%d",&sz);
       int num[sz];
       printf("Enter the element for array");
       for(i=0;i<sz;i++)
       {  
          scanf("%d",&num[i]);
       }

    printf("The Array is :");
    for(j=0;j<sz;j++)
    {
        printf("%d,",num[j]);
    }
    return 0;
}