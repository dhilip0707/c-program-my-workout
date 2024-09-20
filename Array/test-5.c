#include <stdio.h>

void main()
{
	int i, j, k, l, rows, columns, m = 9, swap, o, p;

	printf("Input the number of rows and columns of the matrix: ");
	scanf("%d%d", &rows, &columns);

	int matrix[rows][columns];
	int b[m];
	int median[rows][columns];

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("element-[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}

	printf("The matrix:\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			m = 0;

			for (k = i - 1; k <= i + 1; k++)
			{
				for (l = j - 1; l <= j + 1; l++)
				{
					if ((k > -1 && k < rows) && (l > -1 && l < columns))
					{
						b[m] = matrix[k][l];
						m++;
					}
					else
					{
						b[m] = 0;
						m++;
					}
				}
			}

			for (o = 0; o < m; o++)
			{
				for (p = o + 1; p < m; p++)
				{
					if (b[p] > b[o])
					{
						swap = b[p];
						b[p] = b[o];
						b[o] = swap;
					}
				}
			}
			median[i][j] = b[4];
		}
	}

	printf("Median filter:\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("%d ", median[i][j]);
		}
		printf("\n");
	}
}
