// 26. Write a program in C to print or display the lower triangular of a given matrix.

#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Input the size of the square matrix:");
    scanf("%d", &n);
    int lower[n][n];
    printf("Input the elements in the first matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element-[%d],[%d]:", i, j);
            scanf("%d", &lower[i][j]);
        }
    }
    printf("The matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", lower[i][j]);
        }
        printf("\n");
    }
    printf("Setting zero in lower triangular matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j)
            {
                printf("0 ");
            }
            else
            {
                printf("%d ", lower[i][j]);
            }
        }
        printf("\n");
    }
}

/*
Output:
Input the size of the square matrix:4
Input the elements in the first matrix:
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
The matrix is :
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16 
Setting zero in lower triangular matrix:
1 2 3 4 
0 6 7 8 
0 0 11 12 
0 0 0 16
*/