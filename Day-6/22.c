#include<stdio.h>
#include<math.h>
int main()
{
    int num, decimal=0,rem,power=0;
    printf("Enter the Binary number for decimal number :");
    scanf("%d",&num);
    printf("The decimal number is :");
    while(num!=0)
    {
        rem = num%10;
        decimal = decimal + rem * pow( 2,power);
        num/=10;
        power++;
    }   
     printf("%d", decimal);
     return 0 ;

}