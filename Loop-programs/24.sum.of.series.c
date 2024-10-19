// 24. Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......].

#include <stdio.h>
void main()
{
    int i, n;
    int x, sum = 0, a = 1;
    printf("Input the value of x:");
    scanf("%d", &x);
    printf("Input the number of %d terms:", n);
    scanf("%d", &n);
    a = x;
    sum = x;
    printf("%d\n", a);
    for (i = 1; i < n; i++)
    {

        a = -a * x * x;
        sum = sum + a;
        printf("%d\n", a);
    }
    printf("The Sum is:%d\n", sum);
}

// Output : 
// Input the value of x:2
// Input the number of 0 terms:5
// 2
// -8
// 32
// -128
// 512
// The Sum is:410