// 22. Write a program in C to print a string in reverse using a pointer.

#include <stdio.h>
void main()
{
    int i, count = 0;
    char string[200];
    char *ptr;
    printf("Input the string:");
    scanf("%s", string);
    ptr = string;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    ptr = string;
    printf("The reverse order is :");
    for (i = count - 1; i >= 0; i--)
    {
        printf("%c", *(ptr + i));
    }
    printf("\n");
}


// Output:
// Input the string:w3resource
// The reverse order is :ecruoser3w