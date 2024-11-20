#include <stdio.h>
void main()
{
    int i, n, k;
    printf("Input the number of element to store in the array:");
    scanf("%d", &n);
    int array[n];
    printf("Input %d number of elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element-%d :", i);
        scanf("%d", &array[i]);
    }
    printf("The values store into the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        k = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = k;
    }
    printf("\nThe values store into the array in reverse are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}