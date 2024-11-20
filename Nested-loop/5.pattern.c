#include <stdio.h>
void main()
{
    int i, j, k, l = 1;
    printf("Input the number of rows :");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= k; j++)
        {
            if (j <= k - i)
            {
                printf("*");
            }
            else
            {
                printf("%d",l);
                l++;
            }
        }
        printf("\n");
    }
}