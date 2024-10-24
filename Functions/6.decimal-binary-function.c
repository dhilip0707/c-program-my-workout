// 6. Write a program in C to convert a decimal number to a binary number using the function.

#include <stdio.h>
int conversion(int);
void main()
{
    int input, binary;
    printf("Input the decimal number : ");
    scanf("%d", &input);
    binary = conversion(input);
    printf("The binary value is %d\n.", binary);
}
int conversion(int input)
{
    int i = 1, remainder, binary;
    while (input > 0)
    {
        remainder = input % 2;
        binary = binary + remainder * i;
        input = input / 2;
        i = i * 10;
    }
    return binary;
}

// Output:
// Input the decimal number : 65
// The binary value is 1000001
