//18. Write a program in C for a 2D array of size 3x3 and print the matrix.

#include<stdio.h>
void main()
{
    int i,j,rows,columns;
    printf("Input the rows and columns in the matrix:");
    scanf("%d %d",&rows,&columns);
    int matrix[rows][columns];
    for ( i = 0; i < rows; i++)
    {
       for ( j = 0; j < columns; j++)
       {
        printf("element - [%d],[%d]:",i,j);
        scanf("%d",&matrix[i][j]);
       }
       
    }
    printf("The Matrix:\n");
    for ( i = 0; i < rows; i++)
    {
       for ( j = 0; j < columns; j++)
       {
        printf("%d ",matrix[i][j]);
       }
       printf("\n");
       
    }
    
    
}

/*Output:
Input the rows and columns in the matrix:3 3
element - [0],[0]:1
element - [0],[1]:2
element - [0],[2]:3
element - [1],[0]:4
element - [1],[1]:5
element - [1],[2]:6
element - [2],[0]:7
element - [2],[1]:8
element - [2],[2]:9
The Matrix:
1 2 3 
4 5 6 
7 8 9
*/