#include <stdio.h>
void main()
{
    int i, j,k, factorial = 1, sum = 0,start,end;
    printf("Input starting range of number:");
    scanf("%d", &start);
    printf("Input ending range of number:");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        sum = 0;
        for (j = i; j > 0; j = j / 10)
        {
            factorial = 1;
            for (k = 1; k <= j % 10; k++)
            {
                factorial = factorial * k;
            }
            sum = sum + factorial;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}