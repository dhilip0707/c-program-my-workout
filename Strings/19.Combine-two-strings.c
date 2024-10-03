// 19. Write a program in C to combine two strings manually.

#include <stdio.h>
void combine(char[], char[]);
void main()
{
    char str1[200], str2[200];
    printf("Input the first string :");
    fgets(str1,sizeof(str1),stdin);
    printf("Input the second string :");
    fgets(str2,sizeof(str2),stdin);
    combine(str1, str2);
}
void combine(char str1[], char str2[])
{
    char com[200];
    int i, j, k = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        com[k] = str1[i];
        k++;
    }
    for (j = 0; str2[j] != '\0'; j++)
    {
        com[k] = str2[j];
        k++;
    }
    com[k]!='\0';
    printf("After concatenation the string is :%s", com);
}


// Output:
// Input the first string :this is string one
// Input the second string :this is string two
// After concatenation the string is :this is string one
// this is string two
