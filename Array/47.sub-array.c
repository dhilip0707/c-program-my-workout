// 47. Write a program in C to find a subarray with a given sum 7 from the given array.

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
    printf("\nInput the given sum:");
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

/* Output:
Enter the size of the array :8
element - 0 :7
element - 1 :4
element - 2 :-7
element - 3 :1
element - 4 :3
element - 5 :3
element - 6 :1
element - 7 :-4
The given Array:7 4 -7 1 3 3 1 -4 
Input the given sum:7
7 
1 3 3 
3 3 1 
*/