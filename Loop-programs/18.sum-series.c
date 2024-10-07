// 18. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........]
#include <stdio.h>
void main()
{
    int i, n;
    float x, sum = 1, j = 1, k = 0;
    printf("Input the value of x:");
    scanf("%f", &x);
    printf("Input the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = (2 * i) * (2 * i - 1);
        j = -j * x * x / k;
        sum = sum + j;
    }
    printf("%f", x);
    printf("%d", n);
    printf("the sum is:%f", sum);
}

/*output
Input the value of x:2
Input the number of terms: 5
2 term k = 2.000000, j = -2.000000 sum is: -1.000000
3 term k = 12.000000, j = 0.666667 sum is: -0.333333
4 term k = 30.000000, j = -0.088889 sum is: -0.422222
5 term k = 56.000000, j = 0.006349 sum is: -0.415873
6 term k = 90.000000, j = -0.000282 sum is: -0.416155
*/