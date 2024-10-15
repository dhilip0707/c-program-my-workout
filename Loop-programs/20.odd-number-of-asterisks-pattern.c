// 20.Write a C program to display the pattern as pyramid using asterisks.

#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Input the rows:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// Output :
// Input the rows:5
// *
// ***
// *****
// *******
// *********
