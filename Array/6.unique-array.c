// 6.Write a program in C to print all unique elements in an array.

#include <stdio.h>
void main()
{
    int i, j, n, count = 0;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d", &n);
    int unique[n];
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i);
        scanf("%d", &unique[i]);
    }
    printf("The unique elements forced in the array are :");
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (unique[i] == unique[j])
                {
                    count++;
                }
            }
        }
        
        if (count == 0)
        {
            printf("%d ", unique[i]);
        }
    }
    printf("\n");
}

/*Output:
Input the number of elements to be stored in the array:4
Input 4 elements in the array:
element-0:3
element-1:2
element-2:2
element-3:5
The unique elements forced in the array are :3 5
*/