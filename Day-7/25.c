#include<stdio.h>
int fac(int);
int fac(int n)
{
    if (n==0)
    {
        return 1;
    }
  return n*fac(n-1) ;
}


int main()
{
    int num,x;
    printf("Enter the number of factorial:");
    scanf("%d", &num);
    x=fac(num);
    printf("The Factorial of number is %d", x);
 return 0;
}