#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Input the number of matrix:");
    scanf("%d",&n);
    int matrix[n][n],sum[n][n];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("element-[%d],[%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
        
    }
    printf("The matrix:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
        
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            sum[i][j]=matrix[i*2][j*2]+matrix[i*2][(j*2)+1]+matrix[(i*2)+1][j*2]+matrix[(i*2)+1][(j*2)+1];
        }
        
    }
    for ( i = 0; i <n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d",sum[i][j]);
        }
        printf("\n");
        
    }
    
    
    
}