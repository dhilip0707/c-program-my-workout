// 12. Write a C program to get and print any two characters.
#include <stdio.h>
int main()
{
    char x, y;
    printf("Input the two characters:");
    scanf("%c %c", &x, &y);
    printf("Entered two characters are:%c, %c", x,y);
    return 0;
}

/*
output
Input the two characters:g z
Entered two characters are:g, z
*/
