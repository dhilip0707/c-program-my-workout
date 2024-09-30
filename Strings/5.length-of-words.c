// 5. Write a program in C to count the total number of words in a string.

#include <stdio.h>
int length(char string[]);
void main()
{
    char string[500];
    int count;
    printf("Input the string :");
    fgets(string, sizeof(string), stdin);
    count = length(string);
    printf("Total number of words in the string is :%d\n", count+1);
}
int length(char string[])
{
    int i, count = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            count++;
        }
    }
    return count;
}


/*
Output:
Input the string :Dhilip Kumar
Total number of words in the string is :2
*/