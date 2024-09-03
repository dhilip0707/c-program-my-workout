#include <stdio.h>
void main()
{
    int i = 1, j = 1, n;
    printf("Input the number:");
    scanf("%d", &n);
   while (i <= n)
    {
        j = j * i;
        i++;
    } 
    printf("The factorial of %d is :%d\n", n, j);
}