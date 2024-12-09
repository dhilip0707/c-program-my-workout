// 17. Write a program in C to find the second smallest element in an array.

#include <stdio.h>
void main()
{
    int i, n;
    printf("Input the size of array :");
    scanf("%d", &n);
    printf("Input 5 elements in the array:%d\n", n);
    int smallest[n];
    for (i = 0; i < n; i++)
    {
        printf("elements - %d:", i);
        scanf("%d", &smallest[i]);
    }
    int first = smallest[0];
    for (i = 0; i < n; i++)
    {
        if (first > smallest[i])
        {
            first = smallest[i];
        }
    }
    int second = smallest[0];
    for (i = 0; i < n; i++)
    {
        if (second < smallest[i])
        {
            second = smallest[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (second > smallest[i] && smallest[i] > first)
        {
            second = smallest[i];
        }
    }
    printf("\nThe Second smallest element in the array is :%d\n", second);
}


// Output:
// Input the size of array :3
// Input 5 elements in the array:3
// elements - 0:6
// elements - 1:4
// elements - 2:3

// The Second smallest element in the array is :4