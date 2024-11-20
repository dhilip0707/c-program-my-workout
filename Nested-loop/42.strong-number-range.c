// 42.Write a C program to find Strong Numbers within a range of numbers.

#include <stdio.h>
void main()
{
    int i, j, k, factorial = 1, sum = 0, start, end;
    printf("Input starting range of number:");
    scanf("%d", &start);
    printf("Input ending range of number:");
    scanf("%d", &end);
    printf("The strong numbers are ");

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
    printf("\n");
}


// Output:
// Input starting range of number:1
// Input ending range of number:200
// The strong numbers are 1 2 145 