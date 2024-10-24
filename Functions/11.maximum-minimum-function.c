// 11. Write a C program to find the maximum and minimum of some values using a function that returns an array.

#include <stdio.h>
void max_min()
{
    int input, i;
    printf("Enter the input:");
    scanf("%d", &input);
    int array[input];
    printf("Input %d values:\n", input);
    for (i = 0; i < input; i++)
    {
        printf("elements - %d : ", i);
        scanf("%d", &array[i]);
    }
    int max = array[0], min = array[0];
    for (i = 0; i < input; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("Maximum element is :%d", max);
    printf("\nMaximum element is :%d\n", min);
}
int main()
{
    max_min();
}

// Output:
// Enter the input:5
// Input 5 values:
// elements - 0 : 25
// elements - 1 : 11
// elements - 2 : 35
// elements - 3 : 20
// elements - 4 : 65
// Maximum element is :65
// Maximum element is :11 