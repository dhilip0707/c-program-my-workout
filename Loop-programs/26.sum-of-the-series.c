// 26.Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

#include <stdio.h>
void main()
{
    int i, sum = 0, input, sum1 = 1;
    printf("Input the number of terms:");
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        sum = sum + sum1;
        printf("%d+", sum1);
        sum1 = sum1 * 10 + 1;
    }
    printf("\b \nThe sum is :%d\n", sum);
}

// Output:
// Input the number of terms:5
// 1+11+111+1111+11111
// The sum is :12345