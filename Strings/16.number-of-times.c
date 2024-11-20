// 16. Write a program in C to find the number of times a given word 'the' appears in the given string.

#include <stdio.h>
void number_of_times(char str1[], char str2[]);
void main()
{
    char str1[100], str2[100];
    printf("Input the string :");
    fgets(str1, sizeof(str1), stdin);
    printf("The given word is only in alphabets:");
    fgets(str2, sizeof(str2), stdin);
    number_of_times(str1, str2);
}
void number_of_times(char str1[], char str2[])
{
    int i, j, flag = 0, k = 0, count = 0;
    for (j = 0; str2[j]; j++)
    {
        count++;
    }
    j = 0;
    for (i = 0; str1[i]; i++)
    {
        if ((str1[i] + 32 == str2[j]) || (str1[i] - 32 == str2[j]) || str1[i] == str2[j])
        {
            flag++;
            j++;
            if (count - 1 == flag)
            {
                k++;
            }
        }
        else
        {
            j = 0;
            flag = 0;
        }
    }
    printf("The frequency of the word '%s'is :%d\n", str2, k);
}

// Output:
// Input the string :vatican city is the smallest country in the world
// The given word is only in alphabets:vatican
// The frequency of the word 'vatican'is :1

