// Write a C program that prints the perimeter of a rectangle using its height and width as inputs.()

#include <stdio.h>
int main()
{
    int h, w;
    float l;
    printf("Input the height of the Rectangle : ");
    scanf("%d", &h);
    printf("Input the width of the Rectangle : ");
    scanf("%d", &w);
    l = (h + w) * 2;
    printf("Perimeter of the Rectangle is : %f\n", l);
    return 0;
}

/*
output
Input the height of the Rectangle : 5
Input the width of the Rectangle : 7
Perimeter of the Rectangle is : 24.000000
*/
