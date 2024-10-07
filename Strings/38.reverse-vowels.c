// 38. Write a C program to reverse all the vowels present in a given string. Return the newly created string.

#include <stdio.h>
void reverse(char string[]);
void main()
{
    char string[200];
    printf("Input a string:");
    scanf("%s", string);
    reverse(string);
}
void reverse(char string[])
{
    int i, j = 0;
    char str[100];
    for (i = 0; string[i] != '\0'; i++)
    {
        str[j] = string[i];
        j++;
    }
    for (i = 0; string[i] != '\0'; i++)
    {
        string[i] = str[--j];
    }
    printf("%s", string);
}

// Output:
// Input a string:"AEIou"
// "uoIEA"

  


























  