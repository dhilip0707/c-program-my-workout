// 14.Write a C program to get four integer values range is 0 to 127 and print the corresponding characters.

#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Input the four integers : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Character of %d is:%c\n", a, a);
    printf("Character of %d is:%c\n", b, b);
    printf("Character of %d is:%c\n", c, c);
    printf("Character of %d is:%c\n", d, d);
    return 0;
}

/*
output
Input the four integers : 49 66 99 123
Character of 49 is:1
Character of 66 is:B
Character of 99 is:c
Character of 123 is:{
*/
