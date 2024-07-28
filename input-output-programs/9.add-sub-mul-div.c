// Write a C program to perform addition,subtraction,multiplication and division of two numbers.

#include <stdio.h>
int main()
{
    int h, i;
    int add, sub, mul;
    float div;
    printf("Input any two number seperated by comma : ");
    scanf("%d,%d", &h, &i);
    add = h + i;
    sub = h - i;
    mul = h * i;
    div = (float)h / i; // type cast
    printf("The sum of the given numbers:%d\n", add);
    printf("The difference of the given numbers:%d\n", sub);
    printf("The product of the given numbers:%d\n", mul);
    printf("The quotient of the given numbers:%f\n", div);
    return 0;
}

/*
output
Input any two number seperated by comma : 10,5
The sum of the given numbers:15
The difference of the given numbers:5
The product of the given numbers:50
The quotient of the given numbers:2.000000
*/
