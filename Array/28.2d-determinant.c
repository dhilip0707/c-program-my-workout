// 28. Write a program in C to calculate the determinant of a 3 x 3 matrix.

#include <stdio.h>
void main()
{
    int i, j, n = 3, det = 0;
    int determinant[n][n];
    printf("Input the elements in the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &determinant[i][j]);
        }
    }
    printf("The matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", determinant[i][j]);
        }
        printf("\n");
    }

    det = determinant[0][0] * (determinant[1][1] * determinant[2][2] - determinant[1][2] * determinant[2][1])
        - determinant[0][1] * (determinant[1][0] * determinant[2][2] - determinant[1][2] * determinant[2][0])
        + determinant[0][2] * (determinant[1][0] * determinant[2][1] - determinant[1][1] * determinant[2][0]);

    printf("The determinant of the matrix is: %d\n", det);
}

// Output:
// Input the elements in the matrix:
// element - [0],[0] : 1
// element - [0],[1] : 0
// element - [0],[2] : -1
// element - [1],[0] : 0
// element - [1],[1] : 0
// element - [1],[2] : 1
// element - [2],[0] : -1
// element - [2],[1] : -1
// element - [2],[2] : 0
// The matrix is :
// 1 0 -1 
// 0 0 1 
// -1 -1 0 
// The determinant of the matrix is: 1