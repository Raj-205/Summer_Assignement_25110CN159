#include<stdio.h>
void fib( int n)
{
    int a=0,b=1,temp=0;
    if (n>=1) printf(" the series terms is %d ,",a);
    if (n>=2) printf("%d",b);
    for(int i=3;i<=n;i++)
    { temp=a+b;
       a=b;
       b=temp;
       printf(", %d",temp);
    }
}
int main()
{
    int num;
    printf("Enter the number of terms:");
    scanf("%d",&num);
    fib(num);
    return 0;
}