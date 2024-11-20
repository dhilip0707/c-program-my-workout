// convert 4*5 to 3*4
#include <stdio.h>
void main()
{
    int i, j, rows, columns;
    printf("Input the number of rows and columns:");
    scanf("%d%d", &rows, &columns);
    int matrix[rows][columns], sum[rows][columns];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element-[%d],[%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix-4*5:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows - 1; i++)
    {
        for (j = 0; j < columns - 1; j++)
        {
            sum[i][j] = matrix[i * 1][j * 1] + matrix[i * 1][(j * 1) + 1] + matrix[(i * 1) + 1][j * 1] + matrix[(i * 1) + 1][(j * 1) + 1];
        }
    }
    printf("The matrix-3*4:\n");
    for (i = 0; i < rows - 1; i++)
    {
        for (j = 0; j < columns - 1; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

/*
Output:
Input the number of rows and columns:4 5
element-[0],[0]:1
element-[0],[1]:2
element-[0],[2]:3
element-[0],[3]:4
element-[0],[4]:5
element-[1],[0]:6
element-[1],[1]:7
element-[1],[2]:8
element-[1],[3]:9
element-[1],[4]:10
element-[2],[0]:11
element-[2],[1]:12
element-[2],[2]:13
element-[2],[3]:14
element-[2],[4]:15 
element-[3],[0]:16
element-[3],[1]:17
element-[3],[2]:18
element-[3],[3]:19
element-[3],[4]:20
The matrix-4*5:
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
The matrix-3*4:
16 20 24 28 
36 40 44 48 
56 60 64 68
*/