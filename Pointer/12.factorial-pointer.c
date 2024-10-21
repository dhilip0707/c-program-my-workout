// 12. Write a program in C to find the factorial of a given number using pointers.

#include <stdio.h>
void factorial(int *, int *);
void main()
{
    int input, sum = 1;
    printf("Input a number : ");
    scanf("%d", &input);
    factorial(&input, &sum);
    printf("The Factorial of %d is :%d\n", input, sum);
}
void factorial(int *pointer1, int *pointer2)
{
    for (int m = 1; m <= *pointer1; m++)
    {
        *pointer2 = *pointer2 * m;
    }
}

// Output:
// Input a number : 5
// The Factorial of 5 is :120
