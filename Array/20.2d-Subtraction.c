//20. Write a program in C for the subtraction of two matrices.  

#include<stdio.h>
void main()
{
    int i,j,rows,columns;
    printf("Input rows & columns in the first matrix :");
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
    printf("Input rows & columns  in the second matrix :");
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


// Output:

// Input rows & columns in the first matrix :2 2
// element-[0][0]:5
// element-[0][1]:6
// element-[1][0]:7
// element-[1][1]:8
// Input rows & columns  in the second matrix :2 2
// element-[0][0]:1
// element-[0][1]:2
// element-[1][0]:3
// element-[1][1]:4
// The first matrix :
// 5 6 
// 7 8 
// The second matrix :
// 1 2 
// 3 4 
// The Subtraction of two matrix is :
// 4 4 
// 4 4 