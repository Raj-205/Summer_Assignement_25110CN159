#include<stdio.h>
int main()
{
    int i,j,n=5;
    int x=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(i+1);j++)
        {
            printf("%d",x);

        }
        x+=1;
        printf("\n");
    }
    return 0;
}