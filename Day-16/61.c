#include<stdio.h>
int main()
{
    int n;
    printf("enter the range :");
    scanf("%d",&n);
    int sz=n-1;
    int num[sz];
   printf("Enter %d elements in range 1-%d:\n", sz, n);
    for(int i=0;i<sz;i++)
    {
      scanf("%d",&num[i]);
    }
 int totalsum =  (n* (n + 1)) / 2; 
 int sum=0;
  for(int i=0;i<sz;i++)
  {
    sum+= num[i] ;
  }
 int miss=0;
 miss = totalsum - sum ;
 printf("The missing number is %d",miss);
 return 0;
}
