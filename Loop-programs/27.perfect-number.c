// 27.Write a C program to check whether a given number is a 'Perfect' number or not.
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("Input the number:");
    scanf("%d", &n);
    printf("The positive divisor:");
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d  ", i);
            sum = sum + i;
        }
    }
    printf("\nThe sum of the divisor is:%d\n", sum);
    if (sum == n)
    {
        printf("So,the number is perfect\n");
    }
    else
    {
        printf("\nSo,the number is not perfect\n");
    }
}

/*output:
Input the number:56
The positive divisor:1  2  4  7  8  14  28
The sum of the divisor is:64

So,the number is not perfect
*/