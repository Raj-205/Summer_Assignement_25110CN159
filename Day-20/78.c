#include <stdio.h>
int main()
{
    int n ;
    printf("Enter order of square matrix: ");
    scanf("%d",&n);

    int a[n][n];
    printf("Enter elements of matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    int flag=1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }

    if(flag==1)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}