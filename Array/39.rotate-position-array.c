#include <stdio.h>
void main()
{
    int i, j, k, n, position;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    printf("Enter the position to rotate:");
    scanf("%d", &position);
    int rotate[n];
    for (i = 0; i < n; i++)
    {
        printf("element -%d:", i);
        scanf("%d", &rotate[i]);
    }
    printf("The given array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", rotate[i]);
    }
    printf("\nFrom 4th position the values of the array are :");
    for (i = position; i < n; i++)
    {
        printf("%d ", rotate[i]);
    }
    printf("\nBefore 4th position the values of the array are :");
    for (i = 0; i < position; i++)
    {
        printf("%d ", rotate[i]);
    }

    for (i = 0; i < position; i++)
    {
        k = rotate[0];
        for (j = 0; j < n - 1; j++)
        {
            rotate[j] = rotate[j + 1];
        }
        rotate[n - 1] = k;
    }
    printf("\nAfter rotating from 4th position the array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", rotate[i]);
    }
    printf("\n");
}