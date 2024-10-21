// 2. Write a program in C to demonstrate how to handle pointers in a program.

#include <stdio.h>
void main()
{
    int m, *ab;
    printf("Enter the 1st value of m : ");
    scanf("%d", &m);
    ab = &m;
    printf("%p\n", &m);
    printf("%d\n", m);
    printf("%p\n", ab);
    printf("%d\n", *ab);
    printf("Enter the 2nd value of m : ");
    scanf("%d", &m);
    ab = &m;
    printf("%p\n", ab);
    printf("%d\n", *ab);
    printf("Enter the 3rd value of m : ");
    scanf("%d", &m);
    printf("%p\n", &m);
    printf("%d\n", m);
}
// Output:
// Enter the 1st value of m : 29
// 0x7ffff8afda1c
// 29
// 0x7ffff8afda1c
// 29
// Enter the 2nd value of m : 34
// 0x7ffff8afda1c
// 34
// Enter the 3rd value of m : 7
// 0x7ffff8afda1c
// 7
