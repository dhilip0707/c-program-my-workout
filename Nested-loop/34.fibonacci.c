// 34.Write a program in C to display the first n terms of the Fibonacci series.

#include <stdio.h>
void main()
{
    int i, num1, num2, num3, input;
    printf("Input number of terms to display:");
    scanf("%d", &input);
    printf("Here is the fibonacci series upto %d terms:", input);
    num1 = 0;
    num2 = 1;
    printf("%d %d ", num1, num2);
    for (i = 1; i <= input-2; i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        printf("%d ", num3);
    }
}

/*
output
Input number of terms to display:10
Here is the fibonacci series upto 10 terms:0 1 1 2 3 5 8 13 21 34
*/