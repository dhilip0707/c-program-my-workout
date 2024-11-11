// 37.Write a C program to check whether a number is a palindrome or not.

#include <stdio.h>
void main()
{
    int input, remainder, reverse = 0, num;
    printf("Input the number:");
    scanf("%d", &input);
    num = input;
    while (input != 0)
    {
        remainder = input % 10;
        reverse = reverse * 10 + remainder;
        input = input / 10;
    }
    if (num == reverse)
    {
        printf("%d is a palindrome number", num);
    }
    else
    {
        printf("%d is not a palindrome number", num);
    }
}

/*
output
Input the number:121
121 is a palindrome number
*/