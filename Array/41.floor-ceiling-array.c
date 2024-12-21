// 41. Write a program in C to find the Floor and Ceiling of the number 0 to 10 from a sorted array.
#include <stdio.h>
void main()
{
    int i, j, k, n, floor, ceiling;
    printf("Input the size of the array:");
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
/*
Output:
Input the sixe of the array:6
Input the element in ascending order:
element-0:1
element-1:3
element-2:5
element-3:7
element-4:8
element-5:9
The given array :1 3 5 7 8 9 Number::0 Ceiling is : 1 Floor is :-1
Number::1 Ceiling is : 1 Floor is :1
Number::2 Ceiling is : 3 Floor is :1
Number::3 Ceiling is : 3 Floor is :3
Number::4 Ceiling is : 5 Floor is :3
Number::5 Ceiling is : 5 Floor is :5
Number::6 Ceiling is : 7 Floor is :5
Number::7 Ceiling is : 7 Floor is :7
Number::8 Ceiling is : 8 Floor is :8
Number::9 Ceiling is : 9 Floor is :9
Number::10 Ceiling is : -1 Floor is :9
*/