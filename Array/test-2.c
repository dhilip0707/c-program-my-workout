// convert matrix from 4*4 to 2*2
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Input the number of matrix:");
    scanf("%d", &n);
    int matrix[n][n], sum[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element-[%d],[%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix-4*4:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n-2; i++)
    {
        for (j = 0; j < n-2; j++)
        {
            sum[i][j] = matrix[i * 2][j * 2] + matrix[i * 2][(j * 2) + 1] + matrix[(i * 2) + 1][j * 2] + matrix[(i * 2) + 1][(j * 2) + 1];
        }
    }
    printf("The matrix-2*2:\n");
    for (i = 0; i < n-2; i++)
    {
        for (j = 0; j < n-2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
/*
Output:
Input the number of matrix:4
element-[0],[0]:1
element-[0],[1]:2
element-[0],[2]:3
element-[0],[3]:4
element-[1],[0]:5
element-[1],[1]:6
element-[1],[2]:7
element-[1],[3]:8
element-[2],[0]:9
element-[2],[1]:10
element-[2],[2]:11
element-[2],[3]:12
element-[3],[0]:13
element-[3],[1]:14
element-[3],[2]:15
element-[3],[3]:16
The matrix-4*4:
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16 
The matrix-2*2:
14 22 
46 54 
*/
