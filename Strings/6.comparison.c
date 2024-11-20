// 6. Write a program in C to compare two strings without using string library functions.
// With argument with return
#include <stdio.h>
int compare(char str1[], char str2[]);//declaration
void main()
{
    int count;
    char str1[200], str2[200];
    printf("Input the 1st string:");
    fgets(str1, sizeof(str1), stdin);
    printf("Input the 1st string:");
    fgets(str2, sizeof(str2), stdin);
    printf("%s", str1);
    printf("%s", str2);
    count = compare(str1, str2);
    if (count != 0)
    {
        printf("Strings are equal.");
    }
    else
    {
        printf("Strings are not equal.");
    }
}
int compare(char str1[], char str2[])//definition
{
    int i = 0, count = 0;
    for (i = 0; str1[i]!='\0'|| str2[i] != '\0'; i++)
    {
        if (str1[i] == str2[i])
        {
            count++;
        }
        else
        {
           return 0;
        }
    }

    return count;
}

/*
Output:
Input the 1st string:abcde
Input the 1st string:abcdf
abcde
abcdf
Strings are not equal.
*/