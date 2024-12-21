// 29.Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include <stdio.h>
void main()
{
    int i, j, n, count = 0;
    printf("Input the Rows and Columns of the matrix:");
    scanf("%d %d", &n,&n);
    int matrix[n][n];
    printf("Input the elements in the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
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

// Output:
// Input the Rows and Columns of the matrix:2 2
// Input the elements in the matrix:
// element - [0],[0] : 0
// element - [0],[1] : 0
// element - [1],[0] : 1
// element - [1],[1] : 0
// The given number is sparse matrix
// There are 3 number of zeros in the matrix