// 11. Write a program in C to sort elements of an array in ascending order.

#include <stdio.h>
void main()
{
    int i, j, n, swap;
    printf("Input the size of array:");
    scanf("%d", &n);
    int ascending[n];
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("elements-%d:", i);
        scanf("%d", &ascending[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ascending[i] > ascending[j])
            {
                swap = ascending[i];
                ascending[i] = ascending[j];
                ascending[j] = swap;
            }
        }
    }
    printf("elements of array in sorted ascending order is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ascending[i]);
    }
    printf("\n");
}

/*
Output:
Input the size of array:5
Input 5 elements in the array:
elements-0:9
elements-1:7
elements-2:5
elements-3:4
elements-4:2
elements of array in sorted ascending order is :2 4 5 7 9
*/