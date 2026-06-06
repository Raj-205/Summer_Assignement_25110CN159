#include<stdio.h>
int main()
{
    int i,j;
    int num=5;
    char ch='A';
    for(i=0;i<num;i++)
    {
        for(j=0;j<(i+1);j++)
        {
            printf("%c",ch);     
        }
        ch=ch+1;
        printf("\n");
    }
    return 0;
}