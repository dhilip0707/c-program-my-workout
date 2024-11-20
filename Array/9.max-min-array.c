//9. Write a program in C to find the maximum and minimum elements in an array.

#include <stdio.h>
void main()
{
    int n, i;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d", &n);
    int input[n];
    printf("\nInput %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("elements - %d : ", i);
        scanf("%d", &input[i]);
    }
    int max = input[0], min = input[0];
    for (i = 0; i < n; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
        if (input[i] < min)
        {
            min = input[i];
        }
    }
    printf("Maximum element is :%d", max);
    printf("\nMaximum element is :%d\n", min);

}

/*
Output:
Input the number of elements to be stored in the array:3

Input 3 elements in the array:
elements - 0 : 45
elements - 1 : 25
elements - 2 : 21
Maximum element is :45
Maximum element is :21
*/