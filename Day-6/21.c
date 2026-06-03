#include<stdio.h>
int main()
{
    int num,rem,binary=0 ,i, place =1;
    printf("Enter decimal number for binary number");
    scanf("%d",&num);
    printf("the binary number is :");
    while(num>0)
    { 
        rem = num%2;
        binary = binary + (rem* place);
        num/=2;
        place*=10; 

    }
    printf("%d", binary);
    return 0;

}