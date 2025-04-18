//  43.Write a program in C to print the next greatest elements in a given unsorted array. Elements for which no superior element exists, consider the next greatest 	    element as -1.
#include <stdio.h>
void main()
{
    int i, j, k, n;
    printf("Input the size of the array :");
    scanf("%d", &n);
    int greatest[n];
    printf("Input the element in an array:\n");
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &greatest[i]);
    }
    printf("The given array:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", greatest[i]);
    }
    printf("\n");
    printf("Next Bigger Elements are:\n");
    for (i = 0; i < n; i++)
    {
        k = -1;

        for (j = i + 1; j < n; j++)
        {
            if (greatest[j] > greatest[i])
            {
                k = greatest[j];

                break;
            }
        }
        printf("Next bigger element of %d in the array is: %d\n", greatest[i], k);
    }
}

/*
Output:
Input the size of the array :6
Input the element in an array:
element - 0 : 5
element - 1 : 3
element - 2 : 10
element - 3 : 9
element - 4 : 6
element - 5 : 13
The given array:5 3 10 9 6 13
Next Bigger Elements are:
Next bigger element of 5 in the array is: 10
Next bigger element of 3 in the array is: 10
Next bigger element of 10 in the array is: 13
Next bigger element of 9 in the array is: 13
Next bigger element of 6 in the array is: 13
Next bigger element of 13 in the array is: -1
*/