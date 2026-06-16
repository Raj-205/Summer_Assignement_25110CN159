#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);
    int a[row][col], tran[col][row] ;
    printf("Enter elements of first (%d matrix):\n",row*col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
 printf("The transpose of matrix is \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            tran[j][i] = a[i][j];
        }    
    }   
 for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d ",tran[i][j]);
        }    
        printf("\n");
    }
return 0;
}