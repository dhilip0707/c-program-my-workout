// 7.Write a program in C to merge two arrays of the same size sorted in descending order.

#include <stdio.h>
void main()
{
    int i, j, n, k;
    printf("Input the number of elements to be stored in the first array:\n");
    scanf("%d", &n);
    int first[n], second[n], merge[2 * n];
    printf("Input %d elements in the first array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("elements - %d:", i);
        scanf("%d", &first[i]);
    }
    printf("Input the number of elements to be stored in the secondary :\n");
    scanf("%d", &n);
    printf("Input %d elements in the second array:\n", n);
    for (j = 0; j < n; j++)
    {
        printf("elements - %d:", j);
        scanf("%d", &second[j]);
    }
    for (i = 0; i < n; i++)
    {
        merge[i] = first[i];
    }
    for (j = 0; j < n; j++)
    {
        merge[i + j] = second[j];
    }
    for (i = 0; i < n * 2; i++)
    {
        printf("%d ", merge[i]);
    }
    for (i = 0; i < n * 2; i++)
    {
        for (j = i+1; j < n * 2; j++)
        {
            if (merge[i] < merge[j])
            {
                k = merge[i];
                merge[i] = merge[j];
                merge[j] = k;
                
            }
        }
    }
    printf("The merged array in descending order is :");
    for (i = 0; i < n * 2; i++)
    {
        printf("%d ", merge[i]);
    }
}

/*Output :
Input the number of elements to be stored in the first array:
3
Input 3 elements in the first array:
elements - 0:1
elements - 1:2
elements - 2:3
Input the number of elements to be stored in the secondary :
3
Input 3 elements in the second array:
elements - 0:1
elements - 1:2
elements - 2:3
1 2 3 1 2 3 The merged array in descending order is :3 3 2 2 1 1*/