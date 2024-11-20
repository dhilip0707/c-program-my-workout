// 17. Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
#include<string.h>
void remove_characters(char string[]);
void main()
{
    char string[200];
    printf("Input the string:");
    fgets(string, sizeof(string), stdin);
    remove_characters(string);
}
void remove_characters(char string[])
{
    char str[200];
    int i, j;
    j=str[' '];
    for (i = 0; string[i] != '\0'; i++)
    {
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
        {
            continue;
        }
        else
        {
            for (j = i; string[j] != '\0'; j++)
            {
                string[j] = string[j+1];
            }
        }
        i--;
    
    }
    printf("After removing the output String :%s\n", string);
}

// Output:
// Input the string:w3resource.com
// After removing the output String :wresourcecom