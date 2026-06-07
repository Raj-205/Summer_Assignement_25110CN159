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
        char ch='A';
        for(j=1;j<=(i+1);j++)
        {     
            printf("%c",ch);
            ch = ch+1;
        }
       ch=ch-2;
        for(k=0;k<i;k++)
        {
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}