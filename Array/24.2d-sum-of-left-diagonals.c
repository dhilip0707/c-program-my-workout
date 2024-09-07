//24. Write a program in C to find the sum of the left diagonals of a matrix.
#include <stdio.h>
void main()
{
    int i, j, rows, columns, sum = 0;
    printf("Input the size of the rows and columns:");
    scanf("%d %d", &rows, &columns);
    int left[rows][columns];
    printf("\nInput the elements in the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element - [%d],[%d]:", i, j);
            scanf("%d", &left[i][j]);
            if (i != j)
            {
                sum = sum + left[i][j];
            }
        }
    }
    printf("The matrix is :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", left[i][j]);
        }
        printf("\n");
    }
    printf("Addition of the left diagonal elements is :%d\n", sum);
}

/*Output:
Input the size of the rows and columns:2 2

Input the elements in the matrix:
element - [0],[0]:5
element - [0],[1]:6
element - [1],[0]:8
element - [1],[1]:10
The matrix is :
5 6 
8 10 
Addition of the left diagonal elements is :14
*/