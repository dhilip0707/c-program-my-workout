// 13.Write a C program to get and print any two characters.

#include <stdio.h>
int main()
{
    char a, b, c, d;
    printf("Input the four characters : ");
    scanf("%c %c %c %c", &a, &b, &c, &d);
    printf("ASCII value of %c:%d\n", a, a);
    printf("ASCII value of %c:%d\n", b, b);
    printf("ASCII value of %c:%d\n", c, c);
    printf("ASCII value of %c:%d\n", d, d);
    return 0;
}

/*
output
Input the four characters : 4 a ! H
ASCII value of 4:52
ASCII value of a:97
ASCII value of !:33
ASCII value of H:72
*/
