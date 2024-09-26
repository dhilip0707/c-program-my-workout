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
   printf("\nThe largest sum of contiguous subarray is :");
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
    printf("%d\n", sum1);
}

/*
Output:
Enter the number :9
element-0:8
element-1:3
element-2:8
element-3:-5
element-4:4
element-5:3
element-6:-4
element-7:3
element-8:5
The given array is : 8 3 8 -5 4 3 -4 3 5 
The largest sum of contiguous subarray is :25
*/