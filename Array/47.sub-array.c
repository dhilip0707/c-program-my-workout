#include <stdio.h>
void main()
{
    int i, j, k, n, sum = 0, x;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int sub[n];
    for (i = 0; i < n; i++)
    {
        printf("element - %d :", i);
        scanf("%d", &sub[i]);
    }
    printf("The given Array:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", sub[i]);
    }
    printf("Input the given sum:");
    scanf("%d",&x);
    for (i = 0; i < n; i++)
    {
        sum=0;
        for (j = i; j < n; j++)
        {
            sum = sum + sub[j];
            if (sum == x)
            {
                for (k = i; k <= j; k++)
                {
                  
                
                    printf("%d ", sub[k]);
                    
                }

                printf("\n");
            }
        }
    }
}