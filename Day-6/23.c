#include<stdio.h>
int main ()
{
    int num, count=0;
    printf("Enter the  number:");
    scanf("%d",&num);
    if(num>0)
    {
    while(num>0)
    {
        if(num%2==1)
        {
            count++;
        }
        num/=2;
    }
}

else  
{
    printf("Plese Enter positive number \n");
}
printf("Number of bits is %d", count );
return 0;

}