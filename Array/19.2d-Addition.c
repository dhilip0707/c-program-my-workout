//19. Write a program in C for adding two matrices of the same size.

#include<stdio.h>
void main()
{
    int i,j,rows,columns;
    printf("Input rows & columns in the first matrix :");
    scanf("%d%d",&rows,&columns);
    int add1[rows][columns];
    for ( i = 0; i < rows; i++)
    {
     for ( j = 0; j < columns; j++)
     {
       printf("elements-[%d][%d]:",i,j);
       scanf("%d",&add1[i][j]);
     }
     
    }
    printf("\nInput rows & columns  in the second matrix :");
    scanf("%d%d",&rows,&columns);
    int add2[rows][columns];
    for ( i = 0; i < rows; i++)
    {
     for ( j = 0; j < columns; j++)
     {
       printf("elements-[%d][%d]:",i,j);
       scanf("%d",&add2[i][j]);
     }
     
    }
    printf("The first matrix :\n");
    for ( i = 0; i < rows; i++)
    {
     for ( j = 0; j < columns; j++)
     {
       printf("%d ",add1[i][j]);

     }
     printf("\n");
    }
    printf("The second matrix :\n");
    for ( i = 0; i < rows; i++)
    {
     for ( j = 0; j < columns; j++)
     {
       printf("%d ",add2[i][j]);

     }
     printf("\n");
    }
    printf("The Addition of two matrix is :\n");
    for ( i = 0; i < rows; i++)
    {
     for ( j = 0; j < columns; j++)
     {
       printf("%d ",add1[i][j]+add2[i][j]);

     }
     printf("\n");
    }
    
}


// Output:
// Input rows & columns in the first matrix :2 2
// elements-[0][0]:1
// elements-[0][1]:2
// elements-[1][0]:3
// elements-[1][1]:4

// Input rows & columns  in the second matrix :2 2
// elements-[0][0]:5
// elements-[0][1]:6
// elements-[1][0]:7
// elements-[1][1]:8
// The first matrix :
// 1 2 
// 3 4 
// The second matrix :
// 5 6 
// 7 8 
// The Addition of two matrix is :
// 6 8 
// 10 12
