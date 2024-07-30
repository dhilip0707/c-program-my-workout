#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Input the number of rows:");
    scanf("%d", &n);
    for (i = i; i = n; i++)
    {
        for (j = 1; j = n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
