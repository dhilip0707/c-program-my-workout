#include <stdio.h>

int main()
{
    int i, j, n, k = -1, sum1 = 0, sum2 = 0, a, b, c, x, y;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int closest[n];
    printf("Enter element in the array :\n");
    for (i = 0; i < n; i++)
    {
        printf("element - %d :", i);
        scanf("%d", &closest[i]);
    }
    printf("The given Array:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", closest[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            c = 0;
            c = closest[i] + closest[j];

            if (c > 0)
            {
                if (sum1 == 0)
                {
                    sum1 = c;
                    a = closest[i];
                    b = closest[j];
                }
                else if (sum1 > c)
                {
                    sum1 = c;
                    a = closest[i];
                    b = closest[j];
                }
            }
            else
            {
                if (sum2 == 0)
                {
                    sum2 = c;
                    x = closest[i];
                    y = closest[j];
                }
                else if (sum2 < c)
                {
                    sum2 = c;
                    x = closest[i];
                    y = closest[j];
                }
            }
        }
    }
    printf("sum1=%d,sum2=%d", sum1, sum2);
    if (sum1 < sum2 * k)
    {
        printf("\nThe Pair of elements whose sum is minimum are:%d,%d", a, b);
    }
    else
    {
        printf("\nThe Pair of elements whose sum is minimum are:%d %d\n", x, y);
    }




    //  printf("\ns1=%d,%d\n",sum1,sum2);
}


/*#include <stdio.h>

int main()
{
    int i, j, n, a, b, sum, c;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int closest[n];
    printf("Enter element in the array :\n");
    for (i = 0; i < n; i++)
    {
        printf("element - %d :", i);
        scanf("%d", &closest[i]);
    }
    printf("The given Array:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", closest[i]);
    }
    a = closest[0];
    b = closest[1];
    c = a + b;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            sum = closest[i] + closest[j];
            c = sum;

            if (sum <0)
            {
                sum=-sum;
            }
            if (c<0)
            {
                c=-c;
            }
            if(sum<c)
            {
                c=closest[i] + closest[j];
                a=closest[i];
                b=closest[j];
            }
            if (c<sum)
            {
                sum=c;
            }
            
            
            
        }
    }
    printf("\nsum=%d,%d\n", a,b);
   
}
*/