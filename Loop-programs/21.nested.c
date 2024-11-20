// 21.Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]

#include <stdio.h>
void main()
{
    int i, n, sum = 0, L = 9;
    printf("Input the number of terms:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + L;
        printf("%d ", L);
        L = L * 10 + 9;
    }
    printf("\nThe sum of the series =%d\n", sum);
}
// Output :
// Input the number of terms:5
// 9 99 999 9999 99999
// The sum of the series =111105
