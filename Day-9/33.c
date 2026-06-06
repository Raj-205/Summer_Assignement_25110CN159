#include<stdio.h>
int main ()
{
    int i,j;
    int num=5;
    for(i=0;i<num;i++)
    {
        for(j=0; j<(num-i);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}