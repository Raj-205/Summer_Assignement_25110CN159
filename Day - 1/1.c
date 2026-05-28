#include<stdio.h>
int main()
{
    int num,sum=0,i;
printf("enter for sum of n natural number");
scanf("%d",&num);
for (i=1;i<=num;i++)
 {
     sum+=i;
 }printf("sum of %d natural number is %d",num,sum); 
return 0;
}