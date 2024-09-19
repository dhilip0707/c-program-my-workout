// 2*3

#include <stdio.h>
void main()
{
    int i, j, k, l, rows, columns;
    float sum = 0;
    printf("Input the number of matrix:");
    scanf("%d%d", &rows, &columns);
    int matrix[rows][columns];
    float average[rows][columns];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element-[%d][%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix:\n");
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
            sum = 0;
            for (k = i - 1; k <= i + 1; k++)
            {
                for (l = j - 1; l <= j + 1; l++)
                {
                    if ((k > -1 && k < rows) && (l > -1 && l < columns))
                    {
                        sum = sum + matrix[k][l];
                    }
                }
            }
            average[i][j] = (float)sum / 9;
        }
    }

    printf("Average filter:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%.2f ", average[i][j]);
        }
        printf("\n");
    }
}
