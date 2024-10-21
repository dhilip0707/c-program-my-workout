// 1. Write a program in C to show the basic declaration of a pointer.

#include <stdio.h>
void main()
{
    int m = 10, n, o, *z;
    z = &m;
    printf("Pointer : Show the basic declaration of pointer :\n");
    printf("-------------------------------------------------------\n");
    printf("%p\n", &m);
    printf("%d\n", m);
    printf("%p\n", &m);
    printf("%p\n", &n);
    printf("%p\n", &o);
    printf("%p\n", z);
}

// Output:
// Pointer : Show the basic declaration of pointer :
// -------------------------------------------------------
// 0x7ffda5dfaa44
// 10
// 0x7ffda5dfaa44
// 0x7ffda5dfaa48
// 0x7ffda5dfaa4c
// 0x7ffda5dfaa44