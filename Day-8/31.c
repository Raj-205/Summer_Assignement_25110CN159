#include<stdio.h>
int main()
{
    int i,j, n=5;
    for(i=1;i<=n;i++)
    {
        char ch ='A';
        for(j=1;j<(i+1);j++)
        {
            printf("%c",ch);
            ch= ch+1;
        }
        printf("\n");
    }
    return 0;

}