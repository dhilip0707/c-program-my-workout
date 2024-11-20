// 3. Write a program in C to separate individual characters from a string.

#include <stdio.h>
void main()
{
    char string[50];
    int i;
    printf("Input the string :");
    fgets(string, sizeof string, stdin);
    for (i = 0; string[i] != '\0'; i++)
    {
        printf("%c ", string[i]);
    }
}

/*
Output:
Input the string :Dhilip
D h i l i p
*/