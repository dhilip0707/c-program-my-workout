// 6. Write a program in C to find the maximum number between two numbers using a pointer.

#include <stdio.h>
void main()
{
    int i, j, *ptr, *prt;
    printf("Input the first  number : ");
    scanf("%d", &i);
    printf("Input the second number : ");
    scanf("%d", &j);
    ptr = &i;
    prt = &j;
    if (*ptr > *prt)
    {
        printf("%d is the maximum number.\n", *ptr);
    }
    else
    {
        printf("%d is the maximum number.\n", *prt);
    }
}

// Output:
// Input the first  number : 5
// Input the second number : 6
// 6 is the maximum number.