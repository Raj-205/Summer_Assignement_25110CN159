#include <stdio.h>
int main()
{
    int row1, col1, row2, col2;
    printf("Enter rows and columns of 1. matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter rows and columns of 2. matrix: ");
    scanf("%d %d", &row2, &col2);

    if(col1 != row2)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }

    int a[row1][col1], b[row2][col2], c[row1][col2];

    printf("Enter elements of first matrix:\n");
    for(int i=0;i<row1;i++)
        for(int j=0;j<col1;j++)
            scanf("%d",&a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(int i=0;i<row2;i++)
        for(int j=0;j<col2;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<row1;i++)
        for(int j=0;j<col2;j++)
        {
            c[i][j] = 0;
            for(int k=0;k<col1;k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("Product of matrices:\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }

    return 0;
}