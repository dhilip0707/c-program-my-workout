// 23. Write a program in C to find the sum of the series [x - x^3 + x^5 + ......].

#include <stdio.h>
void main()
{
    int i, x, n, a;
    int sum = 0;
    printf("Input the value:");
    scanf("%d", &x);
    printf("Input number of terms:");
    scanf("%d", &n);
    a = x;
    sum = x;
    for (i = 1; i < n; i++)
    {

        a =-a * x * x;
        printf("a=%d\n", a);
        sum = sum + a;
       
        
    }
    printf("\nThe sum is :%d\n", sum);
}


/*output:
Input the value:3   
Input number of terms:5
a=3
a=-27
a=243
a=-2187
a=19683

The sum is :17715
*/