// 24. Write a program in C to check whether a letter is uppercase or not.

#include <stdio.h>
void main()
{
    char ch;
    printf("Input the character:");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("The entered letter is not an UPPERCASE letter.\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("The entered letter is an UPPERCASE letter.\n");
    }
    else
    {
        printf("The entered character is invalid\n");
    }
}

// Output:
// Input the character:a
// The entered letter is not an UPPERCASE letter.
