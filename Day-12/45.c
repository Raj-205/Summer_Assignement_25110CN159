#include<stdio.h>
void palindrome(int num)
{
    int rem,newnum=0,input=num;
    while(num!=0)
    {
        rem = num%10;
        newnum = newnum*10 + rem;
        num/=10;
    }
    if(input== newnum)
    {
       printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    palindrome(num);
   return 0;
}
