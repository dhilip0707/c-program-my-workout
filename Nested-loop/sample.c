#include <stdio.h>
void main()
{
    int i, j, n, l;
    printf("Input the number of rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d",j);
        }
        {
            printf("*");
        }
        for (l = 1; l <= i; l++)
        {
            printf("%d", l);
        }
        printf("\n");
    }
}