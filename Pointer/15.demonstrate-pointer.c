// 15. Write a C program to demonstrate how a function returns a pointer.

#include <stdio.h>
int *large();
void main()
{
    int *i, num1, num2;
    printf("Input the first number:");
    scanf("%d", &num1);
    printf("Input the second number:");
    scanf("%d", &num2);
    i = large(&num1, &num2);
    printf("%d is the largest number\n", *i);
}
int *large(int *num1, int *num2)
{
    // int *ret;
    // ret = (*num1 > *num2) ? num1 : num2;
    // return ret;
    int *k;
    if (*num1 > *num2)
    {
        k = num1;
    }
    else
    {
        k = num2;
    }
    return k;
}

// Output:
// Input the first number:5
// Input the second number:6
// 6 is the largest number