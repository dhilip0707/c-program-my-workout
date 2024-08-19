// 26.Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
#include <stdio.h>
void main()
{
    int i, sum = 0, n, l = 1;
    printf("Input the number of terms:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + l;
        printf("%d+", l);
        l = l * 10 + 1;
    }
    printf("\bThe sum is :%d\n", sum);
}

/*Output:
Input the number of terms:5
1+11+111+1111+11111+
The sum is :12345
 */