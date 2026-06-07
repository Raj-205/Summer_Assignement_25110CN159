#include<stdio.h>
int main()
{
    int i,j,k;
    int n=5;
    for(i=0;i<5;i++)
    {
        for(int k=0;k<n-i-1;k++)
        {
            printf(" ");
        }
        for(j=1;j<=(i+1);j++)
        { 
           
            printf("%d",j);
        }
        for(k=i;k>0;k--)
        {
            printf("%d",k);
        }

        printf("\n");
    }
    return 0;
}