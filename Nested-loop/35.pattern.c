// 35.Write a C program to display a such a pattern for n rows using a number that starts with 1 and each row will have a 1 as the first and last number.
#include <stdio.h>
void main()
{
    int i, j, input, k;
    printf("Input the rows:");
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}

/*
output
Input the rows:4
1
121
12321
1234321
*/