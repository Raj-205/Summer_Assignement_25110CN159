#include<stdio.h>
int main()
{
    int num,rem, newnum,fact,sum=0,i;
    printf("Enter the number");
    scanf("%d",&num);
    newnum=num;
    while(num!=0)
    {
        rem =num%10;
        fact=1;
        for(i=1;i<=rem;i++)
         {
            fact*=i;

         }
         sum+=fact;
         num/=10;
    }
    
    if(sum== newnum && newnum>0)
    {
        printf("Enter the number is strong");

    }
    else{
        printf("the number is not strong number");
    }
    return 0;
}