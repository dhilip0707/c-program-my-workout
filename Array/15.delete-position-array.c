//15. Write a program in C to delete an element at a desired position from an array.

#include <stdio.h>
void main()
{
    int i, n, j, insert, position;
    printf("Input the size of array:");
    scanf("%d", &n);
    printf("Input %d elements in the array in ascending order:\n", n);
    int list[n];
    for (i = 0; i < n; i++)
    {
        printf("elements - %d:", i);
        scanf("%d", &list[i]);
    }
    printf("Input the position where to delete:");
    scanf("%d", &position);
    if (position <=n && position > 0)
    {
        for (i = position - 1; i < n - 1; i++)
        {
            list[i] = list[i + 1];
        }
        printf("The new list is :");
        for (i = 0; i < n - 1; i++)
        {
            printf("%d ", list[i]);
        }
    }
    else
    {
        printf("entered number is invalid");
    }
    printf("\n");
}

// Output:

// Input the size of array:5
// Input 5 elements in the array in ascending order:
// elements - 0:1
// elements - 1:2
// elements - 2:3
// elements - 3:4
// elements - 4:5
// Input the position where to delete:3
// The new list is :1 2 4 5
