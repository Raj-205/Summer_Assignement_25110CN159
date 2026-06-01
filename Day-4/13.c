#include<stdio.h>
int main()
{
    int a=0,b=1,temp,num ,n ,i;
    printf("enter the number of term for fibonacci series : ");
    scanf("%d",&num);
    printf(" the fibonacci series is :%d,%d", a,b);
    for(i=0;i<num;i++)
    {
    temp=a+b;
    a=b;
    b=temp;
    printf(",%d", temp);
    }
    return 0;
}

