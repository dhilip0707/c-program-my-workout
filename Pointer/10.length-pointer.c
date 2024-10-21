// 10. Write a program in C to calculate the length of a string using a pointer.

#include <stdio.h>
void main()
{
    char string[200];
    int i, count = 0;
    char *ptr;
    printf("Input a string : ");
    scanf("%s", string);
    ptr = string;
    while (*ptr != '\0')
    {
        count++;
        (*ptr++);
    }
    printf("The length of the given string %s is : %d\n ", string, count);
}

// Output:
// Input a string : w3resource
// The length of the given string w3resource is : 10
