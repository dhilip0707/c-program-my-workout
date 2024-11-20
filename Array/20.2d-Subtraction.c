//20. Write a program in C for the subtraction of two matrices.  

#include<stdio.h>
void main()
{
    int i,j,rows,columns;
    printf("Input rows & columns in the first matrix :\n");
    scanf("%d%d",&rows,&columns);
    int sub1[rows][columns];
    for ( i = 0; i < rows; i++)
    {
     for ( j = 0; j < columns; j++)
     {
       printf("element-[%d][%d]:",i,j);
       scanf("%d",&sub1[i][j]);
     }
     
    }
    printf("Input rows & columns  in the second matrix :\n");
    scanf("%d%d",&rows,&columns);
    int sub2[rows][columns];
    for ( i = 0; i < rows; i++)
    {
     for ( j = 0; j < columns; j++)
     {
       printf("element-[%d][%d]:",i,j);
       scanf("%d",&sub2[i][j]);
     }
     
    }
    printf("The first matrix :\n");
    for ( i = 0; i < rows; i++)
    {
     for ( j = 0; j < columns; j++)
     {
       printf("%d ",sub1[i][j]);

     }
     printf("\n");
    }
    printf("The second matrix :\n");
    for ( i = 0; i < rows; i++)
    {
     for ( j = 0; j < columns; j++)
     {
       printf("%d ",sub2[i][j]);

     }
     printf("\n");
    }
    printf("The Subtraction of two matrix is :\n");
    for ( i = 0; i < rows; i++)
    {
     for ( j = 0; j < columns; j++)
     {
       printf("%d ",sub1[i][j]-sub2[i][j]);

     }
     printf("\n");
    }
    
}


/*Output:
Input the rows and columns of the matrix :2 2

Input elements in the first matrix:
element-[0],[0] :5
element-[0],[1] :6
element-[1],[0] :7
element-[1],[1] :8

Input elements in the second matrix:
element-[0],[0] :1
element-[0],[1] :2
element-[1],[0] :3
element-[1],[1] :4

The First matrix is :
5 6 
7 8 

The second matrix is :
1 2 
3 4 

The multiplication of two matrix is :
23 34 
31 46
*/
