// 18. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........]

#include <stdio.h>
void main()
{
    int i, n;
    float x, sum = 1, j = 1, k = 0;
    printf("Input the value of x : ");
    scanf("%f", &x);
    printf("Input the number of terms : ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        k = (2 * i) * (2 * i - 1);
        j = -j * x * x / k;
        sum = sum + j;
    }
    printf("the sum = %f", sum);
    printf("\nNumber of terms = %d", n);
    printf("\nvalue of x = %f\n", x);
}

// Output:
// Input the value of x : 2
// Input the number of terms : 5
// the sum = -0.415873
// Number of terms = 5
// value of x = 2.000000