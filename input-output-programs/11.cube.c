// 11. Write a C program to get two integers and print their cube.

#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Input two Integer Value:");
    scanf("%d%d", &a, &b);
    c = a * a * a;
    d = b * b * b;
    printf("cube of %d is :%d\n", a, c);
    printf("cube of %d is :%d\n", b, d);
    return 0;
}

/*
/output
Input two Integer Value:4 2
cube of 4 is :64
cube of 2 is :8
*/
