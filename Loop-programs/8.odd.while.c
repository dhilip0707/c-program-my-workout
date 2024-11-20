// 8. Write a C program to display the n terms of odd natural numbers and their sum. (to use while loop)

#include <stdio.h>
void main()
{
    int i = 1, sum = 0, n;
    printf("Input number of terms:");
    scanf("%d", &n);
    printf("The odd numbers are :");
    while (i <= n * 2)
    {
        printf("%d ", i);
        sum = i + sum;
        i = i + 2;
    }
    printf("\nThe Sum of odd Natural Number upto %d terms :%d\n", n, sum);
}

// Output :
// Input number of terms:10
// The odd numbers are :1 3 5 7 9 11 13 15 17 19 
// The Sum of odd Natural Number upto 10 terms :100
