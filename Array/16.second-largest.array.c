//16. Write a program in C to find the second largest element in an array.

#include <stdio.h>
void main()
{
    int i, n;
    printf("Input the size of array :");
    scanf("%d", &n);
    printf("Input 5 elements in the array:%d\n", n);
    int largest[n];
    for (i = 0; i < n; i++)
    {
        printf("elements - %d:", i);
        scanf("%d", &largest[i]);
    }
    int first = largest[0];
    for (i = 0; i < n; i++)
    {
        if (first < largest[i])
        {
            first = largest[i];
        }
    }
    printf("f=%d", first);
    int second = largest[0];
    for ( i = 0; i < n; i++)
    {
       if(second>largest[i])
       {
        second=largest[i];
       }
    }
    printf("\nsecond=%d\n", second);
    for (i = 0; i < n; i++)
    {
        if (second < largest[i] && largest[i] < first)
        {
            second = largest[i];
        }
    }
    printf("The Second largest element in the array is :%d\n", second);
}