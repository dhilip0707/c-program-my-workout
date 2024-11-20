// 11. Write a C program to sort a string array in ascending order.
//  with argument without return

#include <stdio.h>
void ascending(char string[]);
void main()
{
    char string[500];
    printf("Input the String:");
    fgets(string, sizeof(string), stdin);
    printf("The string is :%s", string);
    ascending(string);
}
void ascending(char string[])
{
    int i, j, k;
    for (i = 0; string[i] != '\0'; i++)
    {
        for (j = i + 1; string[j] != '\0'; j++)
        {
            if (string[i] > string[j])
            {
                k = string[i];
                string[i] = string[j];
                string[j] = k;
            }
        }
    }
    printf("After sorting the string appears like :");
    for (i = 0; string[i] != '\0'; i++)
    {
        printf("%c ", string[i]);
    }
    // printf("%s",string);
    printf("\n");
}

/*
Output:
Input the String:W3resource
The string is :W3resource
After sorting the string appears like :
 3 W c e e o r r s u
 */