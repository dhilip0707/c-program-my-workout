// 4. Write a program in C to add two numbers using pointers.

#include <stdio.h>
void main()
{
    int i, j, sum = 0, *ptr, *prt, *trp;
    printf("Input the first  number : ");
    scanf("%d", &i);
    printf("Input the second number : ");
    scanf("%d", &j);
    ptr = &i;
    prt = &j;
    trp = &sum;
    *trp = *ptr + *prt;
    printf("The sum of %d and %d is %d\n", i, j, *trp);
}

// Output:
// Input the first  number : 5
// Input the second number : 6
// The sum of 5 and 6 is 11