// 28.Write a C program to find the 'Perfect' numbers within a given number of ranges.

#include <stdio.h>
void main()
{
    int i, j, start, end, sum = 0;
    printf("Input the starting range of number:");
    scanf("%d", &start);
    printf("Input the ending range of number:");
    scanf("%d", &end);
    printf("The perfect numbers within the given range:");
    for (i = start; i <= end; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%d ", sum);
        }
    }
    printf("\n");
}

/*
Output:
Input the starting range of number:1
Input the ending range of number:50
The perfect numbers within the given range:6 28
*/