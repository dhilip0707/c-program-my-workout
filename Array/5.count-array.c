//5.Write a program in C to count the total number of duplicate elements in an array. 
#include <stdio.h>
void main()
{
    int i, j, count = 0, n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    int array[n];
    // int array[] = {4,5,2,2,2};
    // n = 5;
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element-%d :", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[j] == array[i])
            {
            
                count++;
                break;
        
                
            }
        }
    }
    printf("Total number of duplicate elements found in the array is :%d\n", count);
}



// Output:
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element-0 :1
// element-1 :2 
// element-2 :2
// Total number of duplicate elements found in the array is :1
