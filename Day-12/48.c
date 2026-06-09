#include<stdio.h>
void perfect(int n)
{    
    int sum=0,input;
    input=n;
   for(int i=1;i<n;i++)
   {
     if( n%i==0)
     { 
        sum+=i; 
     }
   }
   if(input==sum)
   {
    printf("The number is perfect\n");
   }
   else
   {
    printf("The number is not perfect\n");
   }
}
int main()
{    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    perfect(n);
    return 0;
}  
