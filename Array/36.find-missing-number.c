// 36. Write a program in C to find the missing number in a given array. There are no duplicates in the list.
#include <stdio.h>
void main()
{
    int i, j, k, count, input;
    printf("Enter the size of array :");
    scanf("%d", &input);
    int find[input], l = find[0];
    for (i = 0; i < input; i++)
    {
        printf("Element-%d:", i);
        scanf("%d", &find[i]);
    }
    printf("The given array is :");
    for (i = 0; i < input; i++)
    {
        printf("%d ", find[i]);
    }
    printf("\n");
    for (i = 0; i < input; i++)
    {
        if (find[i] > l)
        {
            l = find[i];
        }
    }
    printf("The missing number is :");
    for (i = 0; i < l; i++)
    {
        count = 0;
        for (j = 0; j < input; j++)
        {
            if (find[j] == i)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

/*
Output:
Enter the size of array :4
Element-0:1
Element-1:5
Element-2:9
Element-3:8
The given array is :1 5 9 8 
The missing number is :0 2 3 4 6 7
*/