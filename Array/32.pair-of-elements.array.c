#include <stdio.h>
void main()
{
    int i, j, sum, n;
    printf("Input the array:");
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("element-[%d]:", i);
        scanf("%d", &array[i]);
    }
    printf("The given array:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nGiven sum is:");
    scanf("%d", &sum);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] + array[j] == sum)
            {
                goto hi;
            }
        }
    }
hi:
    if (array[i] + array[j] == sum)
    {
        printf("pair of elements can make the given sum by the value of index %d and %d\n", i, j);
    }
    else
    {
        printf("no pair of elements can make the given sum\n");
    }
}
