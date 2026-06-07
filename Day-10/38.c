#include<stdio.h>
int main()
{
    int i,j,k;
    int n=5;
    for(i=4;i>=0;i--)
    {
        for(j=0;j<(n-i-1);j++)
        {
            printf(" ");

        }
        for(k=(2*i+1);k>=1;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}