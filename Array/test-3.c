#include<stdio.h>
void main()
{
    int i,j,rows,columns;
    printf("Input the number of rows and columns:");
    scanf("%d%d",&rows,&columns);
    int matrix[rows][columns],sum[rows][columns];
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < columns; j++)
        {
            printf("element-[%d],[%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
        
    }
    printf("4*5:\n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < columns; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
        
    }
    for ( i = 0; i < rows-1; i++)
    {
        for ( j = 0; j < columns-1; j++)
        {
            sum[i][j]=matrix[i*1][j*1]+matrix[i*1][(j*1)+1]+matrix[(i*1)+1][j*1]+matrix[(i*1)+1][(j*1)+1];
        }
        
    }
    printf("3*4:\n");
    for ( i = 0; i <rows-1; i++)
    {
        for ( j = 0; j < columns-1; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
        
    }
    
    
    
}