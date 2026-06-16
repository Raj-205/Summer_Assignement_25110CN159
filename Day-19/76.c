#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);
    if(row==col)
{
    int a[row][col];
    printf("Enter elements of first (%d matrix):\n",row*col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
    int diosum= 0;
    for(int i=0; i<row; i++)
    {
         diosum += a[i][i]; 
    } 
    printf("The sum of diogonal element is %d", diosum);
}
    else
    {
        printf("Please enter squre matrix ! ");
    }
    return 0;
}
