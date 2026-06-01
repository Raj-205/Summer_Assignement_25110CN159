#include<stdio.h>

int main()
{
    int num,i , newnum,rem,sum=0,count=0;
    printf("Enter the number :");
    scanf("%d",&num);
    newnum=num;
    while(newnum!=0)
    {
        newnum/=10;
        count++;
    }
    newnum= num;
    while(newnum!=0)
    {
        rem= newnum%10;
        int pow=1;
     for(i=1; i<=count;i++)
    {
        pow=pow*rem;
      }  
      sum+=pow;
      newnum/=10;

    }

 if(sum==num)
 {
    printf("the number is Armstrong");

 }
 else
 {
    printf("the number is not Armstrong");
 }
  return 0;
}