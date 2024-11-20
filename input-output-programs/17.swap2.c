// 17. Write a C program to swap two integers.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Input the a and b values : ");
    scanf("%d%d", &a, &b);
    printf("before swapping\nvalue of a is : %d\n", a);
    printf("value of a is : %d\n", b);

    c = a;
    a = b;
    b = c;

    printf("After swapping\nvalue of a is : %d\n", a);
    printf("value of a is : %d\n", b);
    return 0;
}
/*
output
Input the a and b values : 45 31
before swapping
value of a is : 45
value of a is : 31
After swapping
value of a is : 31
value of a is : 45
*/
