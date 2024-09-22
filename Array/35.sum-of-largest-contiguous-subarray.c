// 35. Write a program in C to find the largest sum of contiguous subarrays in an array.
#include <stdio.h>
void main()
{
    int i, j,n,sum = 0;
    printf("Enter the number :");
    scanf("%d", &n);
    int sub[n];
    
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i);
        scanf("%d", &sub[i]);
    }
    printf("The given array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", sub[i]);
    }
   printf("The largest sum of contiguous subarray is :");
    int sum1=sub[0];
    for (i = 0; i < n; i++)
    {
        
        sum = 0;
        for (j = i; j < n; j++)
        {
            sum = sum + sub[j];
            if (sum1 <= sum)
            {
                sum1 = sum;
            }
        }
    }
    printf("%d ", sum1);
}