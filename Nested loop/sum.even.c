#include <stdio.h>
void main()
{
    int i = 1, j, k;
    printf("Input the number:");
    scanf("%d", &j);
    printf("The even numbers are:");
    while (i <= j)
    {
        k = k + (2 * i);

        printf("%d", i * 2);
        i++;
    }
    printf("\nThe Sum of even Natural number upto %d terms:%d\n", j, k);
}