// 1.Write a program in C to store elements in an array and print them.

#include <stdio.h>
void main()
{
    int array[10], i;
    printf("Input 10 elements in the array :\n");
    for (i = 0; i < 10; i++)
    {
        printf("elements -%d:", i);
        scanf("%d", &array[i]);
    }
    printf("Elements in array are:");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
}

// Output:
// Input 10 elements in the array :
// elements -0:1
// elements -1:1
// elements -2:2
// elements -3:3
// elements -4:4
// elements -5:5
// elements -6:6
// elements -7:7
// elements -8:8
// elements -9:9
// Elements in array are:1 1 2 3 4 5 6 7 8 9
