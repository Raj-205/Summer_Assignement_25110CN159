#include<stdio.h>
int main()
{
    int i,j;
    int n=5;
    for(i=0;i<5;i++)
    {
        for(int k=0;k<n-i-1;k++)
        {
            printf(" ");
        }
        for(j=0;j<(2*i+1);j++)
        { 
           
            printf("*");
        }

        printf("\n");
    }
    return 0;
}