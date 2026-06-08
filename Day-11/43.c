#include<stdio.h>
void primenum(int a)
{
    int i=2,check=1;
   while (i<a)
{
  if ( a%i==0)
  {
      check=0;
        break;    
  }
  i++;
}
 if (check==1 && a>1 )
 {
     printf("It is Prime Number");
 }
 else
 {
     printf(" It is not a Prime Number");
 }
}

int main()
{
   int num;
   printf("Enter the number :");
   scanf("%d",&num);
   primenum(num);
   return 0;
}