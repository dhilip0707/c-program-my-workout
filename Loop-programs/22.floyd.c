// 22. Write a program in C to print Floyd's Triangle.

#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Input the number of terms : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}

// Output:
// Input the number of terms : 5
// 1
// 01
// 101
// 0101
// 10101