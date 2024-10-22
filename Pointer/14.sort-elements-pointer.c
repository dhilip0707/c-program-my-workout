// 14. Write a program in C to sort an array using a pointer.

#include <stdio.h>
void main()
{
    int i, j, k, input;
    printf("Input the number of elements to store in the array:");
    scanf("%d", &input);
    printf("Input %d number of elements in the array :\n", input);
    int array[input];
    int *ptr = array;
    for (i = 0; i < input; i++)
    {
        printf("element - %d : ", i);
        scanf("%d",ptr+i);
    }
    for (i = 0; i < input; i++)
    {
        printf("%d ", *(ptr + i));
    }
    for (i = 0; i < input; i++)
    {
        for (j = i + 1; j < input; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                k = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = k;
            }
        }
    }
    printf("\n");
    printf("The elements in the array after sorting :\n");
    for (i = 0; i < input; i++)
    {
        printf("element - %d : %d \n",i ,*(ptr + i));
     
    }
}

// Output:
// Input the number of elements to store in the array:5
// Input 5 number of elements in the array :
// element - 0 : 6
// element - 1 : 5
// element - 2 : 3
// element - 3 : 4
// element - 4 : 9
// 6 5 3 4 9 
// The elements in the array after sorting :
// element - 0 : 3 
// element - 1 : 4 
// element - 2 : 5 
// element - 3 : 6 
// element - 4 : 9