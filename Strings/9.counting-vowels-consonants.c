// 9. Write a program in C to count the total number of vowels and consonants in a string.
#include <stdio.h>
void vowels(char string[]);
void consonants(char string[]);

void main()
{
    char string[200];
    printf("Input the String : ");
    fgets(string, sizeof(string), stdin);
    vowels(string);
    consonants(string);
}
void vowels(char string[])
{
    int i = 0, vowels = 0, count = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if ((string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U'))
        {
            vowels++;
        }
        else
        {
            count = 0;
        }
    }
    printf("Number of vowels in the string is :%d\n", vowels);
}
void consonants(char string[])
{
    int i = 0, consonants = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if ((string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U'))
        {
            continue;
        }
        else if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
        {
            consonants++;
        }
    }
    printf("Number of consonants in the string is :%d\n", consonants);
}

/*
Output:
Input the String : Welcome to w3resource.com
Number of vowels in the string is :9
Number of consonants in the string is :12
*/