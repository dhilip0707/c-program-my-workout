// 39. Write a program in C to rotate an array by N positions.

#include <stdio.h>
void main()
{
    int i, j, k, n, position;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    printf("Enter the position to rotate:");
    scanf("%d", &position);
    int rotate[n];
    for (i = 0; i < n; i++)
    {
        printf("element -%d:", i);
        scanf("%d", &rotate[i]);
    }
    printf("The given array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", rotate[i]);
    }
    printf("\nFrom 4th position the values of the array are :");
    for (i = position; i < n; i++)
    {
        printf("%d ", rotate[i]);
    }
    printf("\nBefore 4th position the values of the array are :");
    for (i = 0; i < position; i++)
    {
        printf("%d ", rotate[i]);
    }

    for (i = 0; i < position; i++)
    {
        k = rotate[0];
        for (j = 0; j < n - 1; j++)
        {
            rotate[j] = rotate[j + 1];
        }
        rotate[n - 1] = k;
    }
    printf("\nAfter rotating from 4th position the array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", rotate[i]);
    }
    printf("\n");
}

/*Output:

Enter the size of the array :11
Enter the position to rotate:4
element -0:0 
element -1:3
element -2:6 
element -3:9
element -4:12
element -5:14
element -6:18
element -7:20
element -8:22
element -9:25
element -10:27
The given array is:0 3 6 9 12 14 18 20 22 25 27 
From 4th position the values of the array are :12 14 18 20 22 25 27 
Before 4th position the values of the array are :0 3 6 9 
After rotating from 4th position the array is:12 14 18 20 22 25 27 0 3 6 9 
*/