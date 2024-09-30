// 8. Write a program in C to copy one string to another string.

#include <stdio.h>
int copy(char str1[], char str2[]);
void main()
{
    int count = 0;
    char str1[200], str2[200];
    printf("Input the string :");
    fgets(str1, sizeof(str1), stdin);
    printf("The First string is:%s", str1);
    count = copy(str1,str2);
    printf("Number of characters copied :%d",count-1);
}
int copy(char str1[], char str2[])
{
    int i, count = 0;   
    for (i = 0; str1[i] != '\0'; i++)
    {
        count++;
        str2[i] = str1[i];
    }
    printf("The Second string is :%s", str2);
    return count;
}

/*
Output:
Input the string :This is string
The First string is:This is string
The Second string is :This is string
Number of characters copied :14
*/
