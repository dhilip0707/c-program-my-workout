//  16.Write a C program to display the sum of n terms of even natural numbers.

#include <stdio.h>
void main()
{
    int i = 1, input, sum = 0;
    printf("Input the number:");
    scanf("%d", &input);
    printf("The even numbers are:");
    while (i <= input)
    {
        sum = sum + (2 * i);

        printf("%d ", i * 2);
        i++;
    }
    printf("\nThe Sum of even Natural number upto %d terms:%d\n", input, sum);
}

// Output:
// Input the number:4
// The even numbers are:2 4 6 8
// The Sum of even Natural number upto 4 terms:20