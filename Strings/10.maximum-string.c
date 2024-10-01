// 10. Write a program in C to find the maximum number of characters in a string.
// With argument with return

#include <stdio.h>
int maximum(char string[]);
void main()
{
    char string[500];
    int m;
    printf("Input the string :");
    fgets(string, sizeof(string), stdin);
    printf("The string is :%s", string);
    m = maximum(string);
    printf("appears number of times :%d\n",m);
}
int maximum(char string[])
{
    int i, j, count = 0, s = 0, m = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        count=0;
        for (j = 0; string[j] != '\0'; j++)
        {
            if (string[i] == string[j])
            {
                count++;
            }
        }
        if (m < count)
        {
            m = count;
            s = string[i];
        }
    }
    printf("The Highest frequency of character:%c\n", s);
    return m;
}

/*
Output:
Input the string :Dhilip Kumar
The string is :Dhilip Kumar
The Highest frequency of character:i
appears number of times :2
*/