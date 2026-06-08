#include<stdio.h>
int maxima(int a,int b,int c)
{
   int x;
   x= ((a>b)?(a>c?a:c):(b>c?b:c));
   return x;
}
int main()
{
    int a,b,c;
    printf("Enter the three of maximum:");
    scanf("%d%d%d",&a,&b,&c);
    printf("The of number is :%d", maxima(a,b,c));
    return 0;
}