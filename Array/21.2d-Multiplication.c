// 21. Write a program in C for the multiplication of two square matrices.

#include <stdio.h>
void main()
{
    int i, j, k, rows, columns;
    printf("Input the rows and columns of the matrix :");
    scanf("%d%d", &rows, &columns);
    int first[rows][columns], multiplication[rows][columns];
    printf("\nInput elements in the first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element-[%d],[%d] :", i, j);
            scanf("%d", &first[i][j]);
        }
    }
    int second[rows][columns];
    printf("\nInput elements in the second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element-[%d],[%d] :", i, j);
            scanf("%d", &second[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            multiplication[i][j] = 0;
            for (k = 0; k < columns; k++)
            {
                multiplication[i][j] = multiplication[i][j] + first[i][k] * second[k][j];
                printf("%d\n",multiplication[i][j]);
            }
        }
    }
    printf("\nThe First matrix is :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }
    printf("\nThe second matrix is :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }
    printf("\nThe multiplication of two matrix is :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", multiplication[i][j]);
        }
        printf("\n");  
    }
}

// Output :
// Input the rows and columns of the matrix :2 2

// Input elements in the first matrix:
// element-[0],[0] :1
// element-[0],[1] :2
// element-[1],[0] :3
// element-[1],[1] :4

// Input elements in the second matrix:
// element-[0],[0] :5
// element-[0],[1] :6
// element-[1],[0] :7
// element-[1],[1] :8

// The First matrix is :
// 1 2
// 3 4

// The second matrix is :
// 5 6
// 7 8

// The multiplication of two matrix is  :
// 19 22
// 43 50  
