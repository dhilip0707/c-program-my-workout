// 34. Write a C program to convert vowels into uppercase characters in a string.

#include<stdio.h>
void vowels(char string[]);
void main()
{
    char string[200];
    printf("Input the string:");
    fgets(string,sizeof(string),stdin);
    vowels(string);
}
void vowels(char string[])
{
    int i,j;
    for ( i = 0; string[i]!='\0'; i++)
    {
        if (string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
        {
            j=string[i];
            string[i]=j-32;
        }
        else
        {
            continue;
        }
        
    }
    printf("After converting vowels into upper case the sentence becomes:%s",string);
}

// Output:
// Input the string:w3resource
// After converting vowels into upper case the sentence becomes:w3rEsOUrcE