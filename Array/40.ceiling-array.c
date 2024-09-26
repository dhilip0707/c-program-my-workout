// 40. Write a program in C to find the ceiling in a sorted array.

#include <stdio.h>
void main()
{
    int i, n, k = -1, x;
    printf("Input the size of the array:");
    scanf("%d", &n);
    int ceiling[n];
    printf("Enter the element in ascending order :\n");
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i);
        scanf("%d", &ceiling[i]);
    }
    printf("The given array:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ceiling[i]);
    }
    printf("\nThe value of x:");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (ceiling[i] >= x)
        {
            k = ceiling[i];
            break;
        }
    }
    if (k == -1)
    {
        printf("The ceiling of %d is : %d\n", x, k);
    }
    else
    {
        printf("The ceiling of %d is : %d\n", x, k);
    }
}

/*Output:
Input the size of the array:8
Enter the element in ascending order :
element-0:1
element-1:3
element-2:4
element-3:7
element-4:8
element-5:9
element-6:9
element-7:10
The given array:1 3 4 7 8 9 9 10 
The value of x:5
The ceiling of 5 is : 7
*/