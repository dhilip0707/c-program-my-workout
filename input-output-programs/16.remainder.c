// 16. Write a C program to find the remainder of any two numbers.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Input the two numbers : ");
    scanf("%d%d", &a, &b);
    c = a % b;
    printf(" Remainder of %d and %d is:%d\n", a, b, c);
    return 0;
}

/*
output
Input the two numbers : 21 6
Remainder of 21 and 6 is:3
 */
