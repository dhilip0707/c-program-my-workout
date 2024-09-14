#include <stdio.h>
void main()
{
    int i, j, rows,columns, count = 0;
    printf("Input the size of the matrix:");
    scanf("%d", &rows,&columns);
    int matrix[n][n];
    printf("Input the elements int the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d]", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > (n * n / 2))
    {
        printf("The given number is sparse matrix\n");
    }
    else
    {
        printf("The given number is dense matrix\n");
    }
    printf("There are %d number of zeros in the matrix\n", count);
}