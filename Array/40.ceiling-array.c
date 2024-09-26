#include <stdio.h>
void main()
{
    int i, n, k = -1, x;
    printf("Input the size of the array:");
    scanf("%d", &n);
    int ceiling[n];
    printf("Enter the element in ascending order :\n");
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i);
        scanf("%d", &ceiling[i]);
    }
    printf("The given array:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ceiling[i]);
    }
    printf("\nThe value of x:");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (ceiling[i] >= x)
        {
            k = ceiling[i];
            break;
        }
    }
    if (k == -1)
    {
        printf("The ceiling of %d is : %d\n", x, k);
    }
    else
    {
        printf("The ceiling of %d is : %d\n", x, k);
    }
}