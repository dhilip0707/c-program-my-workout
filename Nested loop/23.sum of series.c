// 23. Write a program in C to find the sum of the series [x - x^3 + x^5 + ......].

/*#include <stdio.h>
void main()
{
    int i,x, n;
    float  a= 1,sum = 1;
    printf("Input the value:");
    scanf("%d", &x);
    printf("Input number of terms:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        a = a * x /i;
        sum = sum + a;
    }
    printf("The sum is :%f", sum);
}
*/


#include <stdio.h>
void main()
{
    int i,x,k,n;
    float  a= 1,sum = 1;
    printf("Input the value:");
    scanf("%d", &x);
    printf("Input number of terms:");
    scanf("%d", &n);
    for (i = 1; i <=n; i++)
    {
        k=(2*i);
        a = x*x*x/k;
        sum = sum + a;
    }
    printf("The sum is :%f", sum);
}