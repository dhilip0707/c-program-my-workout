#include <stdio.h>
void main()
{
    int input, remainder, reverse = 0;
    printf("Input the number:");
    scanf("%d", &input);
    while (input == 0)
    {
        remainder = input % 10;
        reverse = reverse * 10 + remainder;
        input = input / 10;
    }
    printf("The number in reverse order is:%d\n", reverse);
}

/*
output
Input the number:12345
The number in reverse order is:54321
*/