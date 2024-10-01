// 4. Write a program in C to print individual characters of a string in reverse order.
// With argument with return
#include <stdio.h>
int length(char string[]);
void main()
{
    int i, count;
    char string[50];
    printf("Input the string:");
    fgets(string, sizeof(string), stdin);
    count = length(string);
    printf("The characters of the string in reverse are:");
    for (i = count - 1; i >= 0; i--)
    {
        printf("%c ", string[i]);
    }
    printf("\n");
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
Input the values:dhilip

pilihd

*/