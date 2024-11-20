// 2. Write a program in C to find the length of a string without using library functions.
// With argument with return
#include <stdio.h>
int length(char string[]);
void main()
{
    int count;
    char string[50];
    printf("Input the values:");
    fgets(string, sizeof(string), stdin);
    count = length(string);
    printf("length of the string %d\n", count-1);
}
int length(char string[])
{
    int i, count = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

/*
Output:
Input the values:Dhilipkumar
length of the string 11
*/