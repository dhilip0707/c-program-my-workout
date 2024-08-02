#include <stdio.h>
void main()
{
    int i = 1, j = 1, n;
    printf("Input the number:");
    scanf("%d", &n);
    do
    {
        j = j * i;
        i++;
    } while (i <= n);
    printf("The factorial of %d is :%d\n", n, j);
}