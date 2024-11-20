// 23. Write a program in C to check whether a character is a Hexadecimal Digit or not.

#include <stdio.h>
void main()
{
    char ch;
    printf("Input the character:");
    scanf("%c", &ch);

    // if ((string >= 'A' && string <= 'F') || (string >= '10' && string <= '15') || (string >= '0' && string <= '9'))
    if ((ch >= 'A' && ch <= 'F') || (ch >= '0' && ch <= '9'))
    {
        printf("Entered character is a hexadecimal digit.\n");
    }
    else
    {
        printf("Entered character is not a hexadecimal digit.\n");
    }
}

// Output:
// Input the character:9
// Entered character is a hexadecimal digit.
