#include <stdio.h>
void main()
{
    int i, j, k, n, floor, ceiling;
    printf("Input the sixe of the array:");
    scanf("%d", &n);
    int fc[n];
    printf("Input the element in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i);
        scanf("%d", &fc[i]);
    }
    printf("The given array :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fc[i]);
    }
    for (k = 0; k <= 10; k++)
    {
        floor = -1;
        ceiling = -1;
        for (j = 0; j < n; j++)
        {
            if (fc[j] >= k)
            {
                ceiling = fc[j];
                break;
            }
        }
        for (j = 0; j <n; j++)
        {
            if (fc[j] <= k)
            {
                floor = fc[j];
               
            }
        }
        printf("Number::%d Ceiling is : %d Floor is :%d\n",k,ceiling,floor );
    }
}