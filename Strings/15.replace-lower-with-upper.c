// 15. Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include <stdio.h>
void replace(char string[]);
void main()
{
    char string[200];
    printf("Input the string:");
    fgets(string, sizeof(string), stdin);
    replace(string);
}
void replace(char string[])
{
    int i, j;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            j = string[i];
            string[i] = j - 32;
        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {
            j = string[i];
            string[i] = j + 32;
        }
    }
    printf("After Case changed the string  is:%s\n", string);
}


// Output:
// Input the string:This Is A Test String
// After Case changed the string  is:tHIS iS a tEST sTRING