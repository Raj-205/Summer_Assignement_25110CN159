#include<stdio.h>
int fib(int);
int fib(int n )
 {
 if (n==0 || n==1)
 return  n;
 return fib(n-1) + fib(n-2);
 }
 int main ()
 {
    int x ,i ;
    printf("Enter the  Number of term is fibonacci series :");
    scanf("%d", &x);
     for ( i=0; i<x ; i++ )
      {
        printf("%d \n", fib(i));

      }

 return 0;
 }
