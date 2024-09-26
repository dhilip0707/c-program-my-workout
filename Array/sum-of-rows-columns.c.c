// Write a program in C to find the sum of rows and columns of a matrix.
#include <stdio.h>
int main()
{
	int i, j, n, sum, sum1, total;
	printf("Input the size of the rows and columns: ");
	scanf("%d", &n);
	int matrix[n][n];
	printf("Input the elements in the matrix:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("element-[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("The matrix is:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("row:\n");
	for (i = 0; i < n - 1; i++)
	{
		sum = 0;
		for (j = 0; j < n - 1; j++)
		{
			sum = sum + matrix[i][j];
		}
		matrix[i][n - 1] = sum;
		printf("%d ", matrix[i][n - 1]);
	}
	printf("\ncolumn:\n");
	for (j = 0; j < n - 1; j++)
	{
		sum1 = 0;
		for (i = 0; i < n - 1; i++)
		{
			sum1 = sum1 + matrix[i][j];
		}
		matrix[n - 1][j] = sum1;
		printf("%d ", matrix[n - 1][j]);
	}
	for (j = 0; j < n-1; j++)
	{
		total = total+matrix[j][n - 1]+matrix[n - 1][j] ;
		
	}
	printf("%d ",total);
	matrix[n-1][n-1] = total;
	printf("\n");

	printf("sum of row and column is:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}

/*
Output:
Input the size of the rows and columns: 3
Input the elements in the matrix:
element-[0][0]: 1
element-[0][1]: 2
element-[0][2]: 3
element-[1][0]: 1 
element-[1][1]: 2
element-[1][2]: 3
element-[2][0]: 1
element-[2][1]: 2
element-[2][2]: 3
The matrix is:
1 2 3 
1 2 3 
1 2 3 
row:
3 3 
column:
2 4 12 
sum of row and column is:
1 2 3 
1 2 3 
2 4 12 
*/