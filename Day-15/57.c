#include<stdio.h>
int main ()
{
    int sz;
    printf("Enter the size of Array:");
    scanf("%d",&sz);
    int num[sz];
    printf("Enter the Array Element \n");
    for(int i=0;i<sz;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("The orginal array: ");
     for(int i=0;i<sz;i++)
     {
        printf("%d,",num[i]);
     }
     int st=0,temp;
     int end= sz-1, mid =(st+end)/2;
     printf("\n");
     while(st<=end)
     {
        if(st<=mid && end>=mid)
        {
           temp= num[st];
           num[st]= num[end];
           num[end]=temp;
        }
        st++;
        end--;
     }
     printf("The reverse Array: ");
     for(int j=0;j<sz;j++)
     {
        printf("%d,",num[j]);
     }
     return 0;
}
