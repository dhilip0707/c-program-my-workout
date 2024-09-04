#include <stdio.h>
void main()
{
    int i, j, count = 0, n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    int array[n];
    // int array[] = {4,5,2,2,2};
    // n = 5;
    printf("Input %d elements in the array :", n);
    for (i = 0; i < n; i++)
    {
        printf("\nelement-%d :", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[j] == array[i])
            {
                printf("if %d, %d\n", j, i);
                count++;
                break;
        
                
            }
        }
    }
    printf("Total number of duplicate elements found in the array is :%d\n", count);
}


/*
output
Input the number of elements to be stored in the array :3           
Input 3 elements in the array :
element-0 :1

element-1 :2

element-2 :2
if 2, 1
Total number of duplicate elements found in the array is :1

*/