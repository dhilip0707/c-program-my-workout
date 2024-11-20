// 18. Write a program in C to find the frequency of characters.

#include <stdio.h>
void frequency(char string[], char str[]);
void main()
{
    char string[100], str[100];
    printf("Input the string :");
    fgets(string, sizeof(string), stdin);
    printf("Input the character to find frequency:");
    scanf("%s", str);
    frequency(string, str);
}
void frequency(char string[], char str[])
{
    int i, j = 0, count = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == str[j])
        {
            count++;
        }
    }
    printf("The frequency of %s is %d\n", str, count);
}

// Output:
// Input the string :This is string
// Input the character to find frequency:i
// The frequency of i is 3
