//22. Write a program in C to find the transpose of a given matrix.

#include <stdio.h>
void main()
{
    int i, j, k, rows, columns;
    printf("Input the rows and columns of the matrix:");
    scanf("%d%d", &rows, &columns);
    int original[rows][columns], transpose[columns][rows];
    printf("\n Input elements in the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element-[%d],[%d]:", i, j);
            scanf("%d", &original[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {

            transpose[j][i] = original[i][j];

        }
    }

    printf("The matrix is :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", original[i][j]);
        }
        printf("\n");
    }
    printf("The transpose is :\n");
    for (i = 0; i < columns; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

/*Output:
Input the rows and columns of the matrix:2 3

 Input elements in the matrix:
element-[0],[0]:0
element-[0],[1]:1
element-[0],[2]:2
element-[1],[0]:3
element-[1],[1]:4
element-[1],[2]:5
The matrix is :
0 1 2 
3 4 5 
The transpose is :
0 3 
1 4 
2 5
*/