//30.Write a C program to find the Armstrong number for a given range of number.
#include <stdio.h>
void main()
{
    int i, j, k, start, end, count = 0, sum = 0, total, digit;
    printf("Input the starting range of number:");
    scanf("%d", &start);
    printf("Input the ending range of number:");
    scanf("%d", &end);
    printf("Armstrong numbers in given range are:");
    for (i = start; i <= end; i++)
    {
        total = 0;
        count = 0;
        for (j = i; j != 0; count++)
        {
            j = j / 10;
        }
        for (j = i; j != 0; j = j / 10)
        {
            k = 0;
            digit = count;
            sum = 1;
            k = j % 10;
            while (digit != 0)
            {
                sum = sum * k;
                digit--;
            }
            total = total + sum;
        }
        if (total == i)
        {
            printf("%d\n", i);
        }
    }
}