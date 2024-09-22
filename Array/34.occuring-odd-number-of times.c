
// 34. Write a program in C to find the number occurring odd number of times in an array.All numbers occur even number of times except one number which occurs odd number of times.

#include <stdio.h>
void main()
{
    int i, j, count = 0, k = 0, l, n;
    printf("Input the number :");
    scanf("%d", &n);
    int odd[n], re[n];
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i);
        scanf("%d", &odd[i]);
    }
    printf("The given array is : ");
    for (i = 0; i < n; i++)
    {

        printf("%d ", odd[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (l = 0; l < k; l++)
        {
            if (re[l] == odd[i])
            {
                goto hi;
            }
        }
        count = 0;

        for (j = 0; j < n; j++)
        {
            if (odd[i] == odd[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            re[k] = odd[i];
            k++;
        }
        //  printf("%d", count);

    hi:
    }
    printf("\nThe element odd number of times is :");
    for (i = 0; i < k; i++)
    {
        printf("%d ", re[i]);
    }
    printf("\n");
}
/*
Output:
Input the number :6
element-0:8
element-1:3
element-2:8
element-3:3
element-4:8
element-5:3
The given array is : 8 3 8 3 8 3
The element odd number of times is :8 3
*/