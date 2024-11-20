// 15. Write a C program to find the Quotient of any two real numbers.

#include <stdio.h>
int main()
{
    int a, b;
    float c;
    printf("Input the two numbers : ");
    scanf("%d%d", &a, &b);
    c = (float)a / b;
    printf("Quotient of %d and %d is:%f\n", a, b, c);
    return 0;
}

/*output
Input the two numbers : 34 3
Quotient of 34 and 3 is:11.333333
*/
