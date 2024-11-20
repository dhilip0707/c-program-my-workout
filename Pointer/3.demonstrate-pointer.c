// 3. Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.

#include <stdio.h>
void main()
{
    int m, *n;
    float fx, *o;
    char cht, enter, *p;
    printf("m :");
    scanf("%d", &m);
    printf("fx :");
    scanf("%f", &fx);
    scanf("%c",&enter);
    printf("cht:");
    scanf("%c", &cht);
    printf("Using & operator :\n");
    printf("%p\n", &m);
    printf("%p\n", &fx);
    printf("%p\n", &cht);
    printf("using & and * operator:\n");
    n = &m;
    o = &fx;
    p = &cht;
    printf("%d\n", m);
    printf("%f\n", fx);
    printf("%c\n", cht);
    printf("using only pointer variable :\n");
    printf("%p\n", n);
    printf("%p\n", o);
    printf("%p\n", p);
    printf("using only pointer operator :\n");
    printf("%d\n", *n);
    printf("%f\n", *o);
    printf("%c\n", *p);
}

// Output :
// m :300
// fx :300.600006
// cht:z
// Using & operator :
// 0x7fffc224c008
// 0x7fffc224c00c
// 0x7fffc224c006
// using & and * operator:
// 300
// 300.600006
// z
// using only pointer variable :
// 0x7fffc224c008
// 0x7fffc224c00c
// 0x7fffc224c006
// using only pointer operator :
// 300
// 300.600006
// z