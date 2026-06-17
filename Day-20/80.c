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

    for(int j=0;j<col;j++)
    {
        int sum = 0;
        for(int i=0;i<row;i++)
            sum += a[i][j];
        printf("Sum of column %d = %d\n", j+1, sum);
    }

    return 0;
}
