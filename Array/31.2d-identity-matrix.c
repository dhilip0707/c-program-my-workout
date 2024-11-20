// 31. Write a program in C to check whether a given matrix is an identity matrix.
#include <stdio.h>
void main()
{
    int i, j, rows, columns, flag = 0;
    printf("Input the number of rows for the matrix :");
    scanf("%d", &rows);
    printf("Input the number of columns for the matrix :");
    scanf("%d", &columns);
    int matrix[rows][columns];
    if (rows == columns)
    {
        printf("Input the elements in the matrix:\n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                printf("element-[%d][%d]:", i, j);
                scanf("%d", &matrix[i][j]);
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
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                if (i == j && matrix[i][j] != 1)
                {
                    flag++;
                }
                else if (i!=j&&matrix[i][j] != 0)
                {
                    flag++;
                    printf("%d",flag);
                }

            }
        }
        if (flag == 0)
        {
            printf("The matrix is an identity matrix.\n");
        }
        else
        {
            printf("The matrix is not an identity matrix.\n");
        }
    }
    else
    {
        printf("Rows and Columns are not equal\n");
    }
}

/*
Output:
Input the number of rows for the matrix :3
Input the number of columns for the matrix :3
Input the elements in the matrix:
element-[0][0]:1
element-[0][1]:0 
element-[0][2]:0
element-[1][0]:0
element-[1][1]:1
element-[1][2]:0
element-[2][0]:0
element-[2][1]:0
element-[2][2]:1
The matrix is :
1 0 0 
0 1 0 
0 0 1 
The matrix is an identity matrix.
*/