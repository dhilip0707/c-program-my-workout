// 35. Write a C program to find the length of the longest substring of a given string without repeating characters.

#include <stdio.h>
void main()
{
    char string[200];
    int i, j = 0, k = 0, count = 1, n = 4;
    printf("Input the string:");
    scanf("%s", string);
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != string[j + 1])
        {
            j++;
            count++;
        }
        else if (k < count)
        {
            k = count;
            count = 1;
            j++;
        }
    }
    printf(" Length of the longest substring without repeating characters:%d\n", k);
}
