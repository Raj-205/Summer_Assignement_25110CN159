#include<stdio.h>
int main()
{
    int num, i,fact=1;
printf("enter  number for factorial ");
scanf("%d",&num);   
for(i=1;i<=num;i++)
{
    fact*=i;
}
printf("factorial of  is %d",fact);
return 0;   
}
