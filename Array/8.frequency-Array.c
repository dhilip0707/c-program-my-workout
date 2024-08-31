#include <stdio.h>
void main()
{
    int i, j, k, n, count = 0, flag;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d", &n);
    int frequency[n];
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("elements - %d : ", i);
        scanf("%d", &frequency[i]);
    }
    printf("The frequency of all elements of an array:\n");
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (k = 0; k < i - 1; k++)
        {
            if (frequency[i] == frequency[k])
            {
                flag = 1;
                
            }
        }

        if (flag == 0)
        {
            count = 0;

            for (j = 0; j < n; j++)
            {
                if (frequency[i] == frequency[j])
                {
                    count++;
                }
            }
            printf("%d occurs %d times\n", frequency[i], count);
        }
    }
}