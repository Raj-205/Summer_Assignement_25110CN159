#include<stdio.h>
int main()
{
    int sz;
    int idex , feq=0 ;
    printf("Enter the size of array:");
    scanf("%d",&sz);
    int num[sz];
    for(int i=0;i<sz;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<sz;i++)
    {   int count=1;
        for(int j= i+1;j<sz;j++)
        {
            if(num[i]==num[j])
            {
                count++; 
                            }
        }
      if( count> feq)
      {
        feq= count;
        idex=i;
      }
    }
    printf("The most frequent element is: %d\nfequency is:%d ", num[idex],feq);
    return 0;
}