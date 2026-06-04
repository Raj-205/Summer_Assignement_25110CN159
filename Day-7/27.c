#include<stdio.h>
int sum(int);
int sum(int num)
{
    if(num<10)
    {
        return num ;
    }
    return (num%10)+ sum(num/10);
}
 int main()
 {
     int num;
     printf("Enter the number ");
     scanf("%d", &num);
    printf("The sum of number is %d", sum(num));
    return 0;
 }