#include<stdio.h>
int main()
{
    int a=0,b=1,temp,num,i;
    printf("enter the number of nth term of fibonacci series:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("it is nevative number ");

    }
    else if (num==0)
    {
        printf("The nth term is 0");

    }
    else
 {   
    for(i=2;i<num;i++)  

    {
    temp=a+b;
    a=b;
    b=temp;
    }
}
printf("the nth term is %d", temp);
}
