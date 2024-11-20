// 5. Write a program in C to add numbers using call by reference.

#include <stdio.h>
void add(int *ptr, int *prt, int *trp);
void main()
{
    int i, j, k = 0;
    printf("Input the first  number : ");
    scanf("%d", &i);
    printf("Input the second number : ");
    scanf("%d",&j);
    add(&i, &j,&k);
    printf("The sum of two integer is :%d\n", k);
}
void add(int *ptr, int *prt, int *trp)
{
    *trp = *ptr + *prt;
}

// Output:
// Input the first  number : 5
// Input the second number : 6
// The sum of two integer is :11