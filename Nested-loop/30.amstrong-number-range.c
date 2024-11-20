// 30.Write a C program to find the Armstrong number for a given range of number.


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
            k = j % 10;
            sum = 1;
            digit = count;
            while (digit != 0)
            {
                sum = sum * k;
                digit--;
            }
            total = total + sum;
        }
        if (total == i)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Output:
// Input the starting range of number:1       
// Input the ending range of number:1000
// Armstrong numbers in given range are:1 2 3 4 5 6 7 8 9 153 370 371 407