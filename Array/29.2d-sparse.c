#include <stdio.h>
void main()
{
    int i, j, n,n, count = 0;
    printf("Input the size of the matrix:");
    scanf("%d", &n,&n);
    int matrix[n][n];
    printf("Input the elements int the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d]", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > (n * n / 2))
    {
        printf("The given number is sparse matrix\n");
    }
    else
    {
        printf("The given number is dense matrix\n");
    }
    printf("There are %d number of zeros in the matrix\n", count);
}

You said:
#include <stdio.h>
void main()
{
    int i, j, k,l,rows,columns,m,swap;

    printf("Input the number of matrix:");
    scanf("%d%d", &rows,&columns);
    int matrix[rows][columns];int b[m],median[rows][columns];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element-[%d][%d]:", i, j);
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
            m=0;
            for (k = i- 1; k <=i+1; k++)
            {
                for (l = j- 1; l <=j+1; l++)
                {
                    if ((k > -1 && k < rows) && (l > -1 && l < columns))
                    {
                        b[m] = matrix[k][l];
						m++;
                    }
					else
					{
						b[m]=matrix[k][l];
						m++;
					}
	
                }
            }
            for ( i = 0; i < m-1; i++)
			{
				for ( j = i+1; j < m; j++)
				{
					if(b[j]>b[i])
					{
						swap=b[j];
						b[j]=b[i];
						b[i]=swap;
					}
				}
				median[i][j]=b[m]/2;
			}
			
        }
    }
    
	
	printf("%d",median[i][j]);
    printf("median filter:\n");
    for (i =0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d",median[i][j]);
        }
        printf("\n");
    }median[i][j]=b[m]/2;
}


#include <stdio.h>

void main() {
    int i, j, k, l, rows, columns, m, swap;

    printf("Input the number of rows and columns of the matrix: ");
    scanf("%d%d", &rows, &columns);
    
    int matrix[rows][columns];
    int b[9];  
    int median[rows][columns];

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("element-[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

   
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            m = 0;

            // Collect the 3x3 neighborhood
            for (k = i - 1; k <= i + 1; k++) {
                for (l = j - 1; l <= j + 1; l++) {
                    if (k >= 0 && k < rows && l >= 0 && l < columns) {
                        b[m] = matrix[k][l];
                        m++;
                    }
                }
            }

            // Sort the collected neighborhood values
            for (int x = 0; x < m - 1; x++) {
                for (int y = x + 1; y < m; y++) {
                    if (b[y] < b[x]) {  // Sort in ascending order
                        swap = b[y];
                        b[y] = b[x];
                        b[x] = swap;
                    }
                }
            }

           
            median[i][j] = b[m / 2];  // Middle element in the sorted list
        }
    }

    printf("Median filter:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", median[i][j]);
        }
        printf("\n");
    }
}