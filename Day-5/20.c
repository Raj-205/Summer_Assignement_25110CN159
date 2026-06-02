#include<stdio.h>
int main()
{
    int num,i=2;
    printf("Enter the number");
    scanf("%d",&num);

      while (num>i)
    {
        if(num%i==0)
        {
            num/=i;

        }
        else{
            i+=1;

        }
    }
       
    printf("The Largest prime factor is %d",num);
   return 0;
}  