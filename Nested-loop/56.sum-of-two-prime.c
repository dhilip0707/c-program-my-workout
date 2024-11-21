// 56.Write a program in C to check whether a number can be expressed as the sum of two prime.

#include <stdio.h>
void main()
{
    int input, l, i, j, k, sum1, sum2;
    printf("Input the number : ");
    scanf("%d", &input);
    for (i = 1; i <= input / 2; i++)
    {
        l = input - i;
        sum1 = 1;
        for (j = 2; j <= l; j++)
        {
            if (l % j == 0)
            {
                sum1 = sum1 * j;
            }

            sum2 = 1;
            for (k = 1; k <= i; k++)
            {
                if (i % k == 0)
                {
                    sum2 = sum2 * k;
                }
            }
            if (sum1 == j)
            {
                if (sum2 == i)
                {
                    if (sum1 + sum2 == input)
                    {

                        printf("%d = %d + %d\n", input, j, i);
                    }
                }
            }
        }
    }
}


// Output:
// Input the number : 16
// 16 = 13 + 3
// 16 = 11 + 5