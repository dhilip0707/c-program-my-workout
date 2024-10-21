// 11. Write a program in C to swap elements using call by reference.

#include <stdio.h>
void swap(int *, int *, int *);
void main()
{
    int i, j, k;
    printf("Input the value of 1st element:");
    scanf("%d", &i);
    printf("Input the value of 2nd element:");
    scanf("%d", &j);
    printf("Input the value of 3rd element:");
    scanf("%d", &k);
    printf("The value before swapping are :\nelement 1 = %d\nelement 2 = %d\nelement 3 = %d\n", i, j, k);
    swap(&i, &j, &k);
    printf("The value after swapping are :\nelement 1 = %d\nelement 2 = %d\nelement 3 = %d\n", i, j, k);
}
void swap(int *a, int *b, int *c)
{
    int q;
    q = *b;
    *b = *a;
    *a = *c;
    *c = q;
}


// Output:
// Input the value of 1st element:5
// Input the value of 2nd element:6
// Input the value of 3rd element:7
// The value before swapping are :
// element 1 = 5
// element 2 = 6
// element 3 = 7
// The value after swapping are :
// element 1 = 7
// element 2 = 5
// element 3 = 6