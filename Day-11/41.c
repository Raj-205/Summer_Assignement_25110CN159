#include<stdio.h>
void sumnum(int , int);
void sumnum(int a,int b)
{
   int sum=0;
   sum= a+b;
   printf("Sum of number is: %d",sum);
}
int main()
{
 int a,b;
 printf("Enter two number:");
 scanf("%d%d",&a,&b);
 sumnum(a,b);
 return 0;
}