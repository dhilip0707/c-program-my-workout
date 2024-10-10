// 15.Write a C program to calculate the factorial of a given number.

#include <stdio.h>
void main()
{
    int i = 1, j = 1, n;
    printf("Input the number:");
    scanf("%d", &n);
   while (i <= n)
    {
        j = j * i;
        i++;
    } 
    printf("The factorial of %d is :%d\n", n, j);
}


// Output:
// Input the number:5
// The factorial of 5 is :120


