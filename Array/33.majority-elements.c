// 33.Write a program in C to find the majority element of an array.A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).

#include <stdio.h>
void main()
{
    int i, j, count = 0, n;
    printf("Enter the input :");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i);
        scanf("%d", &a[i]);
    }
    printf("The given array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        if (count == 0)
        {
            j = a[i];
            count = 1;
        }
        else if (a[i] == j)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == j)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        printf("Majority of element is %d\n", j);
        printf("Number of times : %d\n", count);
    }
    else
    {
        printf("There are no Majority Elements in the given array.\n");
    }
}

/*
Output:
Enter the input :8
element-0:4
element-1:8
element-2:4
element-3:6
element-4:7
element-5:4
element-6:4
element-7:8
The given array is :4 8 4 6 7 4 4 8 
There are no Majority Elements in the given array.
*/