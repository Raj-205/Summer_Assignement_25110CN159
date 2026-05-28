#include<stdio.h>
int main()
{
    int num,count=0,i;
printf("enter number to count of digit ");
scanf("%d",&num);   
while(num!=0)
{
    num=num/10;
    count++;
}
printf("number of digit is %d",count);
return 0;
}