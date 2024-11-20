// 30.Write a program in C to accept two matrices and check whether they are equal.
#include <stdio.h>
void main()
{
    int i, j, row1, column1, row2, column2, flag = 0;
    printf("Input Rows and Columns of the 1st matrix :");
    scanf("%d%d", &row1, &column1);
    printf("Input Rows and Columns of the 2nd matrix :");
    scanf("%d%d", &row2, &column2);
    int matrix1[row1][column1];
    printf("Input elements in the first matrix :\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column1; j++)
        {
            printf("element :[%d],[%d]:", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    int matrix2[row2][column2];
    printf("Input elements in the second matrix :\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < column2; j++)
        {
            printf("element :[%d],[%d]:", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
   printf("The first matrix is :\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column1; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is :\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < column2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    if (row1 == row2 && column1 == column2)
    {
        printf("The Matrices can be compared \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                if (matrix1[i][j] != matrix2[i][j])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            printf("Two matrices are equal.\n");
        }
        else
        {
            printf("Two matrices are not equal.\n");
        }
    }
    else
    {
        printf("The Matrices cannot be compared \n");
        printf("Two matrices are not equal.\n");
    }
}

/*
Output:
Input Rows and Columns of the 1st matrix :2 2
Input Rows and Columns of the 2nd matrix :2 2
Input elements in the first matrix :
element :[0],[0]:1
element :[0],[1]:2
element :[1],[0]:3
element :[1],[1]:4
Input elements in the second matrix :
element :[0],[0]:1
element :[0],[1]:2
element :[1],[0]:3
element :[1],[1]:4
The first matrix is :
1 2 
3 4 
The second matrix is :
1 2 
3 4 
The Matrices can be compared 
Two matrices are equal.

*/