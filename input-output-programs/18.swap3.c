// 18. Write a C program to swap three integers.

#include <stdio.h>
int main()
{
    int x, y, z, w;
    printf("Input the x,y and z values : ");
    scanf("%d%d%d", &x, &y, &z);
    printf("before swapping\nvalue of x is : %d\n", x);
    printf("value of y is : %d\n", y);
    printf("value of z is : %d\n", z);
    w = x;
    x = y;
    y = z;
    z = w;
    printf("After swapping\n value of x is : %d\n", x);
    printf("value of y is : %d\n", y);
    printf("value of z is : %d\n", z);
    return 0;
}

/*
output
Input the x,y and z values : 28 13 89
before swapping
value of x is : 28
value of y is : 13
value of z is : 89
After swapping
 value of x is : 13
value of y is : 89
value of z is : 28
*/
