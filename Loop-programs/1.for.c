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


/*
Output:
Enter the input:10
1 2 3 4 5 6 7 8 9 10
*/