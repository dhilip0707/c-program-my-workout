// 30. Write a program in C to check whether a character is a digit or not.

#include <stdio.h>
void main()
{
    char n;
    printf("Input the character:");
    scanf("%c", &n);
    if (n >= '0' && n <= '9')
    {
        printf("The entered character is digit.\n");
    }
    else
    {
        printf("The entered character is not a digit.\n");
    }
}

// Output:
// Input the character:7
// The entered character is digit.
