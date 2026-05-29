#include<stdio.h>
int main()
{
    int num, revnum=0 ;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0)
    {
        revnum=revnum*10+num%10;
        num=num/10;
    }
    printf("The reverse of the number is:%d",revnum);
    return 0;
}