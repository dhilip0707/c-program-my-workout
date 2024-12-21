// 25. Write a program in C to find the sum of rows and columns of a matrix.
#include <stdio.h>
void main()
{
    int i, j, k, rows, columns;
    printf("Input the size of the rows and columns:");
    scanf("%d%d", &rows, &columns);
    int matrix[rows][columns], total[rows], total1[columns];
    printf("Input the elements in the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element-[%d],[%d] :", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        total[i] = 0;
        for (j = 0; j < columns; j++)
        {
            total[i] = total[i] + matrix[i][j];
        }
    }
    for (i = 0; i < columns; i++)
    {
        total1[i] = 0;
        for (j = 0; j < rows; j++)
        {
            total1[i] = total1[i] + matrix[j][i];
        }
    }
    printf("The matrix is :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("The sum of rows and columns of the matrix is :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("%d ", total[i]);
        printf("\n");
    }
    for (k = 0; k < columns; k++)
    {
        printf("%d ", total1[k]);
    }
    printf("\n");
}

/*
Output:
Input the size of the rows and columns:2 3
Input the elements in the matrix:
element-[0],[0] :1
element-[0],[1] :2
element-[0],[2] :3
element-[1],[0] :4
element-[1],[1] :5
element-[1],[2] :6
The matrix is :
1 2 3
4 5 6
The sum of rows and columns of the matrix is :
1 2 3 6
4 5 6 15
5 7 9

*/