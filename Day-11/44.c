#include<stdio.h>
int fact(int a)
{
    int fact=1,i;
    for(i=1;i<=a;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int result;
    result = fact(num);
    printf("The factorial of number is %d",result);
    return 0;
}