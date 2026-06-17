#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    int a[row][col];
    printf("Enter elements of the matrix:\n");
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<row;i++)
    {
        int sum = 0;
        for(int j=0;j<col;j++)
            sum += a[i][j];
        printf("Sum of row %d = %d\n", i+1, sum);
    }

    return 0;
}