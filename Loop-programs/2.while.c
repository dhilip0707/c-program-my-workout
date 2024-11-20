// 2. Write a C program to compute the sum of the first 10 natural numbers.

#include <stdio.h>
void main()
{
    int i = 1, sum = 0, n;
    printf("Enter the input:");
    scanf("%d", &n);
    printf("Natural numbers are :");
    while (i <= n)
    {

        printf("%d ", i);
        sum = i + sum;
        i++;
    }
    printf("\nThe Sum is :%d\n", sum);
}

/*
Output
Enter the input:10
Natural numbers are :1 2 3 4 5 6 7 8 9 10
The Sum is :55
*/
