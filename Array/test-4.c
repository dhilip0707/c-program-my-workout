
#include <stdio.h>
void main()
{
    int i, j, k, l,n;
    float sum=0;
    printf("Input the number of matrix:");
    scanf("%d", &n);
    int matrix[n][n], average[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element-[%d][%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = i - 1; k <= i + 1; k++)
            {
                for (l = j - 1; l <= j + 1; l++)
                {
                    if ((k > -1 && k < n) && (l > -1 && l < n))
                    {
                        sum = sum + matrix[k][l];
                    }
                }
            }
            average[i][j] =sum / 9;
        }
    }
    printf("Average filter:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", average[i][j]);
        }
        printf("\n");
    }
}


