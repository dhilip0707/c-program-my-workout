// 24. Write a program in C to find the sum of the left diagonals of a matrix.
#include <stdio.h>
void main()
{
    int i, j, n, k = 0, sum = 0;
    printf("Input the size of the matrix:");
    scanf("%d", &n);
    int left[n][n];
    k = n;
    printf("\nInput the elements in the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d]:", i, j);
            scanf("%d", &left[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        k = k - 1;
        for (j = 0; j < n; j++)
        {
            if (j == k)
            {
                sum = sum + left[i][j];
            }
        }
    }
    printf("The matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", left[i][j]);
        }
        printf("\n");
    }
    printf("Addition of the left diagonal elements is :%d\n", sum);
}

/*Output:
Input the size of the matrix:4

Input the elements in the matrix:
element - [0],[0]:1
element - [0],[1]:2
element - [0],[2]:3
element - [0],[3]:4
element - [1],[0]:5
element - [1],[1]:6
element - [1],[2]:7
element - [1],[3]:8
element - [2],[0]:9
element - [2],[1]:10
element - [2],[2]:11
element - [2],[3]:12
element - [3],[0]:13
element - [3],[1]:14
element - [3],[2]:15
element - [3],[3]:16
The matrix is :
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Addition of the left diagonal elements is :34
*/