#include<stdio.h>
int rev(int , int );
 int rev(int num , int result)
 {
    int rem; 
    if (num==0)
    {
        return result ;
    }
    ;
    return  rev(num/10, result*10+ num%10);

}
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d", &x);
    printf( " The reverse of number is %d", rev(x,0));
    return 0;
}