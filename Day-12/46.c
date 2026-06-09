#include<stdio.h>
#include<math.h>
void armstrong(int num)
{
    int count=0,rem,input=num,newnum=0,result=0;
    while(num!=0)
    {
        num/=10;
        count++;
    }
    newnum=input;
    while(newnum!=0)
    {
         rem=newnum%10;
         result= result + (int) round(pow(rem,count));
         newnum/=10;
    }
 if(result==input)
 {
    printf("The number is armstrong");
 }
 else
 {
    printf("The is not Armstrong number");
 }
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    armstrong(num);
    return 0;
}