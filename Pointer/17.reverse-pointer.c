// 17. Write a program in C to print the elements of an array in reverse order.

#include <stdio.h>
void main()
{
    int i, input;
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &input);
    int array[input];
    int *ptr = array;
    for (i = 0; i < input; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", ptr + i);
    }
    for (i = 0; i < input; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\nThe elements of array in reverse order are :");
    for (i = input - 1; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

// Output:
// Input the number of elements to store in the array : 5
// element - 0 : 2
// element - 1 : 3
// element - 2 : 4
// element - 3 : 5
// element - 4 : 6
// 2 3 4 5 6
// The elements of array in reverse order are :6 5 4 3 2
