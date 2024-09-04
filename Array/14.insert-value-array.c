#include <stdio.h>
void main()
{
    int i, n, j, insert, index;
    printf("Input the size of array:");
    scanf("%d", &n);
    printf("Input %d elements in the array in ascending order:\n", n);
    int unsorted[n + 1];
    for (i = 0; i < n; i++)
    {
        printf("elements - %d:", i);
        scanf("%d", &unsorted[i]);
    }
    printf("Insert the value to be inserted:\n");
    scanf("%d", &insert);
    printf("Input the Position, where the value to be inserted :\n");
    scanf("%d", &index);
    printf("The current list of the array :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", unsorted[i]);
    }
    for (i = n; i >= index; i--)
    {
        unsorted[i] = unsorted[i - 1];
    }
    unsorted[index] = insert;
    printf("\n After Insert the element the new list is :");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", unsorted[i]);

    }
    printf("\n");
}

/*output:
Input the size of array:4
Input 4 elements in the array in ascending order:
elements - 0:1
elements - 1:8
elements - 2:7
elements - 3:10
Insert the value to be inserted:
5
Input the Position, where the value to be inserted :
2
The current list of the array :1 8 7 10 
 After Insert the element the new list is :1 8 5 7 10 
 */