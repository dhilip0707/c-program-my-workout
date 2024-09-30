// 1.Write a C program to display the first 10 natural numbers.

#include <stdio.h>
void main()
{
    int i, input;
    printf("Enter the input:");
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        printf("%d ", i);
    }
}


