// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include <stdio.h>
void alphabets(char string[]);
void digits(char string[]);
void specialcharacters(char string[]);
void main()
{
    char string[200];
    printf("Input the String : ");
    gets(string);
    // fgets(string, sizeof(string), stdin);
    alphabets(string);
    digits(string);
    specialcharacters(string);
}
void alphabets(char string[])
{
    int i = 0, count = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
        {
            count++;
        }
    }
    printf("Number of Alphabets in the string is :%d\n", count);
}
void digits(char string[])
{
    int i = 0, count = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            count++;
        }
    }
    printf("Number of digits in the string is :%d\n", count);
}
void specialcharacters(char string[])
{
    int i = 0, count = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')||(string[i] >= '0' && string[i] <= '9'))
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    printf("Number of special characters in the string is :%d\n", count);
}

/*
Output : 
Input the String : Welcome to w3resource.com
Number of Alphabets in the string is :21
Number of digits in the string is :1
Number of special characters in the string is :3
*/

