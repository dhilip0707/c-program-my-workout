// 10.Write a C program to find the third angle of a triangle if two angles are given.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Input two angles of triangla seperated by comma : ");
    scanf("%d,%d", &a, &b);
    c = 180 - (a + b);
    printf("Third angle of the triangle :%d\n",c);
    return 0;
}

/*
output
Input two angles of triangla seperated by comma : 50,70
Third angle of the triangle :60
*/
