#include <stdio.h>
int main()
{
    int num,i=2,check=1;
    printf("enter a number");
    scanf("%d",&num);

 while (i<num)
{
  if ( num%i==0)
  {
      check=0;
        break;    
  }
  i++;
}
 if (check==1 && num>1 )
 {
     printf("prime number");
 }
 else
 {
     printf("not a prime number");
 }
    return 0;
}
