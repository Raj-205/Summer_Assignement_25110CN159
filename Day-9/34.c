#include<stdio.h>
int main()
{
    int i,j;
    int num=5;
    for(i=0;i<num;i++)
    {
        for(j=1;j<=(num-i);j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
 return 0;
}