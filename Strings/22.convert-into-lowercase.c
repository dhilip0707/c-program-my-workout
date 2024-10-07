// 22. Write a program in C to convert a string to lowercase.

#include <stdio.h>
void lower_case(char string[]);
void main()
{
    char string[200];
    printf("Input the string:");
    fgets(string, sizeof(string), stdin);
    lower_case(string);
}
void lower_case(char string[])
{
    int i, j;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            j = string[i];
            string[i] = j + 32;
        }
        else
        {
            continue;
        }
    }
    printf("Here is the above string in lowercase :%s", string);
}

// Output:
// Input the string:THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG
// Here is the above string in lowercase :the quick brown fox jumps over the lazy dog