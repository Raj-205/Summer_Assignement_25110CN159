#include<stdio.h>
int main()
{
    int num, i=1;
    printf("Enter the number ");
    scanf("%d",&num);
    while(i<=num)
    {
    if (num % i==0)
    {
        printf("The facter of the number is %d\n",i);
    }
    i++;
    }
}