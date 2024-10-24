// 8. Write a program in C to get the largest element of an array using the function.

#include <stdio.h>
int largest(int);
void main()
{
    int input, large;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d", &input);
    int array[input];
    printf("Input %d elements in the array:\n", input);
    large = largest(input);
    printf("The largest element in the array is :%d\n", large);
}
int largest(int input)
{
    int i, array[input];
    for (i = 0; i < input; i++)
    {
        printf("elements - %d : ", i);
        scanf("%d", &array[i]);
    }
    int large = array[0];
    for (i = 0; i < input; i++)
    {
        if (array[i] > large)
        {
            large = array[i];
        }
    }
    return large;
}


// Output:
// Input the number of elements to be stored in the array:5
// Input 5 elements in the array:
// elements - 0 : 1
// elements - 1 : 2
// elements - 2 : 3
// elements - 3 : 6
// elements - 4 : 5
// The largest element in the array is :6