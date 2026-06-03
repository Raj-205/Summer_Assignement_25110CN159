#include<stdio.h>
int main()
{
    int num, pow ,i=1,result=1;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the power:");
    scanf("%d",&pow);
    while(i<=pow)
    {
       
        result = result * num;
        i++;

    }
 printf("The resultant number is:  %d",result);
 return 0;
}