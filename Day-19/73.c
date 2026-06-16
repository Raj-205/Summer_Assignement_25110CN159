#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);
    int a[row][col], b[row][col], sum[row][col];
    printf("Enter elements of first (%d matrix):\n",row*col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }        
    printf("Enter elements of second (%d matrix):\n",row*col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {   scanf("%d",&b[i][j]);
        }
    }    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }    
    printf("Sum of matrices:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}